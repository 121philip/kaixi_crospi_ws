#!/usr/bin/env python3

#  Copyright (c) 2025 KU Leuven, Belgium
#
#  Author: Santiago Iregui
#  email: <santiago.iregui@kuleuven.be>
#
#  GNU Lesser General Public License Usage
#  Alternatively, this file may be used under the terms of the GNU Lesser
#  General Public License version 3 as published by the Free Software
#  Foundation and appearing in the file LICENSE.LGPLv3 included in the
#  packaging of this file. Please review the following information to
#  ensure the GNU Lesser General Public License version 3 requirements
#  will be met: https://www.gnu.org/licenses/lgpl.html.
# 
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU Lesser General Public License for more details.

import rclpy
import sys

from threading import Lock
import rclpy.time
from rclpy.node import Node

# from betfsm.betfsm import TickingState,TICKING,Blackboard, Sequence, Message, TickingStateMachine
from betfsm.betfsm import *
from betfsm.betfsm_node import BeTFSMNode
from betfsm.betfsm_crospi import load_task_list, eTaSL_StateMachine
from betfsm.graphviz_visitor import GraphViz_Visitor
from betfsm.logger import get_logger,set_logger
from betfsm.betfsm_ros import *


from rclpy.duration import Duration


#from betfsm.graphviz_visitor import *


from betfsm.betfsm_action_server import CheckForCanceledAction

import math


class BeTFSMRunner:
    def __init__(self,node:Node, statemachine:TickingState, blackboard: Blackboard, sampletime):
        get_logger().info(f"BeTFSMRunner started with sample time {sampletime}")
        self.node  = node
        self.sm    = statemachine
        self.bm    = blackboard
        self.timer = self.node.create_timer(sampletime, self.timer_cb)
        self.outcome = "TICKING"
        self.outcome_lock = Lock()

    def timer_cb(self):
        outcome = self.sm(self.bm)
        #resetprint("---"),
        if outcome!=TICKING:
            self.timer.cancel()
            self.set_outcome(outcome)
            self.sm.reset()

    def set_outcome(self, outcome):
        with self.outcome_lock:
            self.outcome = outcome

    def get_outcome(self):
        with self.outcome_lock:
            outcome = self.outcome
        return outcome

class MyStateMachine(TickingStateMachine):
    def __init__(self):
        super().__init__("my_state_machine",[SUCCEED, ABORT])


        self.add_state(
            eTaSL_StateMachine("MovingHome","MovingHome",node=None),
            transitions={SUCCEED: "spacemouse_shared_control_vla",
                        ABORT: ABORT}
        )

        self.add_state(
            eTaSL_StateMachine("spacemouse_shared_control_vla","spacemouse_shared_control_vla",node=None),
            transitions={SUCCEED: SUCCEED,
                        ABORT: ABORT}
        )




# main
def main(args=None):

    print("betfsm")
    rclpy.init(args=args)

    my_node = BeTFSMNode.get_instance("skill_example")

    # set_logger("default",my_node.get_logger())
    #set_logger("service",my_node.get_logger())
    set_logger("state",my_node.get_logger())

    blackboard = {}

    load_task_list("$[crospi_application_template]/skill_specifications/libraries/test_trossen/tasks/trossen_vla_shared_control.json",blackboard)
    
    sm = MyStateMachine()

    # prints a graphviz representation of sm:
    vis = GraphViz_Visitor()
    sm.accept(vis)
    vis.print()

    runner = BeTFSMRunner(my_node,sm,blackboard,0.01)

    rclpy.spin(my_node)
    
    # try:
    #     while (runner.get_outcome()==TICKING):
    #         rclpy.spin_once(my_node)
    #     rclpy.shutdown()
    # except KeyboardInterrupt:
    #     pass
    # finally:
    #     print("final outcome : ",runner.get_outcome())
        
    print("shutdown")

if __name__ == "__main__":
    sys.exit(main(sys.argv))
