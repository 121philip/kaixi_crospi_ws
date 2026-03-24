#ifndef EXPRESSIONGRAPH_VELOCITYESTIMATOR_HPP
#define EXPRESSIONGRAPH_VELOCITYESTIMATOR_HPP

#include <kdl/frames.hpp>
#include <boost/shared_ptr.hpp>
#include <string>

namespace KDL
{

    /**
     * Abstract class describing a Velocity estimator
     */
    class VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimatorBase> Ptr;

        /**
         * Constructor
         * @param typeDescription description of the specific type of velocity estimator
         */
        VelocityEstimatorBase() {}

        /**
         * @brief Returns a description of the Velocity estimator Type
         * 
         * @return const std::string& 
         */
        virtual const std::string getTypeDescription() = 0;

        /**
         * initialize the estimator with information only provided by the routine
         * that calls the solver
         * 
         * @param dt nominal sampletime that is known during initialization 
         * time.  There is also a sampletime provided during run-time, see 
         * the estimateVelocity method.
         */
        virtual void initialize(double dt) = 0;


        /**
         * provides a deep, virtual copy of this object
         * (you can copy the object without knowing its specific type)
         *
        virtual Ptr clone() = 0;*/

        /**
         * @brief gives a brief description of the object as a string
         */
        virtual std::string toString() = 0;

        /**
         * always provide a destructor for an abstract class
         */
        virtual ~VelocityEstimatorBase() {}
    };
 
    template<typename T>
    class VelocityEstimator : public VelocityEstimatorBase {
        /**
         * @brief estimates velocity when given an input
         * 
         * This class typically has an internal state, e.g. to remember 
         * the previous input, or to apply filtering.
         * @param input input value
         * @param dt    sample period
         * @return T
         */
        virtual T estimateVelocity(const T& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };

    template<>
    class VelocityEstimator<double> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<double> > Ptr;
        virtual double estimateVelocity(double input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };
    template<>
    class VelocityEstimator<Vector> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<Vector> > Ptr;
        virtual Vector estimateVelocity(const Vector& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };
    template<>
    class VelocityEstimator<Rotation> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<Rotation> > Ptr;
        virtual Vector estimateVelocity(const Rotation& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };

    template<>
    class VelocityEstimator<Frame> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<Frame> > Ptr;
        virtual Twist estimateVelocity(const Frame& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };

    template<>
    class VelocityEstimator<Twist> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<Twist> > Ptr;
        virtual Twist estimateVelocity(const Twist& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };

    template<>
    class VelocityEstimator<Wrench> : public VelocityEstimatorBase
    {
    public:
        typedef boost::shared_ptr<VelocityEstimator<Wrench> > Ptr;
        virtual Wrench estimateVelocity(const Wrench& input, double dt) = 0;
        virtual ~VelocityEstimator() {}
    };

 
}
#endif