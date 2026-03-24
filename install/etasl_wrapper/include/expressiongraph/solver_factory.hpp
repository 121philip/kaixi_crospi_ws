/**
 * file: solver_factory.hpp
 * 
 * purpose:
 *    Define the SolverFactory class that encapsulates the creation 
 *    of solver classes using a Parameter list
 * 
 * author:
 *    Erwin Aertbelien (c) 2019
 *
 * part of eTaSL
 */
#ifndef EXPRESSIONGRAPH_SOLVER_FACTORY
#define EXPRESSIONGRAPH_SOLVER_FACTORY

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include <expressiongraph/solver.hpp>

typedef std::map< std::string, double > ParameterList;
typedef std::map< std::string, std::string > DocList;


namespace KDL {


/**
 * SolverFactory: an abstract interface to a factory for eTaSL solvers.
 *
 * You first create the factory, you then optionally call getParameters() to get the default parameters,
 * you can also optionally call getDocumentation to get documentation on these parameters. You then set
 * the parameters using set/getParameters() and call create to create the solver.
 */ 
class SolverFactory {

    public:
        typedef boost::shared_ptr<SolverFactory> Ptr;

       /** 
         * returns parameter names and their value
         *  (if no parameters are set, default values will be given).
         */
        virtual void getParameters( ParameterList& plist) = 0;

        /**
         * load Parameters into factory
         * 0 if succesfull
         * -1:  an unknown parameter is in the list, the rest of the parameters
         *      will be loaded.  The application can decide what to do with this
         *       (ignore, give warning or give error)
         * if a parameter is not specified, a default value is used.
         */
        virtual int setParameters( const ParameterList& plist ) = 0;

        /**
         * gets documentation for the available parameters
         */
        virtual void getDocumentation( DocList& dlist ) = 0;

        /**
         * create the solver with the loaded parameters (or the defaults)
         */
        virtual boost::shared_ptr<solver> create() = 0;
   

        /**
         * provides a deep, virtual copy of this object
         * (you can copy the object without knowing its specific type)
         */ 
        virtual boost::shared_ptr<SolverFactory> clone() = 0;

        virtual ~SolverFactory() {} 
};


} // namespace KDL

#endif
