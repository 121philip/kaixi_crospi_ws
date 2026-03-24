import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/masterthesis/kaixi_crospi_ws/install/betfsm_demos'
