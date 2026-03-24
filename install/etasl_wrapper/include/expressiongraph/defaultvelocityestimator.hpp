#ifndef EXPRESSIONGRAPH_DEFAULTVELOCITYESTIMATOR_HPP
#define EXPRESSIONGRAPH_DEFAULTVELOCITYESTIMATOR_HPP

#include "velocityestimator.hpp"
#include <boost/make_shared.hpp>
#include <sstream>
#include <kdl/frames_io.hpp>

namespace KDL
{

    template <typename T>
    class DefaultVelocityEstimator : public VelocityEstimator<T> {
    };

    template <>
    class DefaultVelocityEstimator<double> : public VelocityEstimator<double> {
        bool firsttime;
        double previous_input;
        double initialValue;
    public:
        DefaultVelocityEstimator(double _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<double>";
        }

        virtual double estimateVelocity(double input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                double retval = (input - previous_input) / dt;
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<double> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<double>("<<initialValue<<")";
            return ss.str();
        }
        virtual ~DefaultVelocityEstimator() {}
    };
   
    template <>
    class DefaultVelocityEstimator<Vector> : public VelocityEstimator<Vector> {
        bool firsttime;
        Vector   previous_input;
        Vector   initialValue;
    public:
        DefaultVelocityEstimator(const Vector& _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<Vector>";
        }

        virtual Vector estimateVelocity(const Vector& input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                KDL::Vector retval = KDL::diff(previous_input, input,dt);
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<Vector> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<Vector>("<<initialValue<<")";
            return ss.str();
        }        
        virtual ~DefaultVelocityEstimator() {}
    };
    template <>
    class DefaultVelocityEstimator<Rotation>: public VelocityEstimator<Rotation> {
        bool firsttime;
        Rotation previous_input;
        Vector   initialValue;
    public:
        DefaultVelocityEstimator(const Vector& _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<Rotation>";
        }

        virtual Vector estimateVelocity(const Rotation& input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                KDL::Vector retval = KDL::diff(previous_input, input,dt);
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<Rotation> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<Rotation>("<<initialValue<<")";
            return ss.str();
        }        
        virtual ~DefaultVelocityEstimator() {}
    };

    template <>
    class DefaultVelocityEstimator<Frame>: public VelocityEstimator<Frame> {
        bool firsttime;
        Frame previous_input;
        Twist   initialValue;
    public:
        DefaultVelocityEstimator(const Twist& _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<Frame>";
        }

        virtual Twist estimateVelocity(const Frame& input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                KDL::Twist retval = KDL::diff(previous_input, input,dt);
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<Frame> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<Frame>("<<initialValue<<")";
            return ss.str();
        }        
        virtual ~DefaultVelocityEstimator() {}
    };

   template <>
    class DefaultVelocityEstimator<Twist>: public VelocityEstimator<Twist> {
        bool firsttime;
        Twist previous_input;
        Twist   initialValue;
    public:
        DefaultVelocityEstimator(const Twist& _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<Twist>";
        }

        virtual Twist estimateVelocity(const Twist& input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                KDL::Twist retval = KDL::diff(previous_input, input,dt);
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<Twist> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<Twist>("<<initialValue<<")";
            return ss.str();
        }        
        virtual ~DefaultVelocityEstimator() {}
    };

   template <>
    class DefaultVelocityEstimator<Wrench>: public VelocityEstimator<Wrench> {
        bool firsttime;
        Wrench previous_input;
        Wrench initialValue;
    public:
        DefaultVelocityEstimator(const Wrench& _initialValue):
            initialValue(_initialValue) {}
        virtual void initialize(double) {
            firsttime = true;
        }

        virtual const std::string getTypeDescription() {
            return "DefaultVelocityEstimator<Wrench>";
        }

        virtual Wrench estimateVelocity(const Wrench& input, double dt) {
            if (firsttime)
            {
                firsttime=false;
                previous_input = input;
                return initialValue;
            }
            else
            {
                KDL::Wrench retval = KDL::diff(previous_input, input,dt);
                previous_input = input;
                return retval;
            }
        } 
        virtual Ptr clone() {  return boost::make_shared< DefaultVelocityEstimator<Wrench> >(*this);  }
        virtual std::string toString() {
            std::stringstream ss;
            ss << "DefaultVelocityEstimator<Wrench>("<<initialValue<<")";
            return ss.str();
        }        
        virtual ~DefaultVelocityEstimator() {}
    };


};

#endif