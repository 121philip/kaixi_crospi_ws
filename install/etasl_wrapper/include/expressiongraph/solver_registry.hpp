/**
 * file:  solver_registry.hpp
 * purpose:
 *   Definition of the SolverRegistry class
 * author:
 *    Erwin Aertbelien (c) 2019
 *
 * part of eTaSL
 */
#ifndef EXPRESSIONGRAPH_SOLVER_REGISTRY
#define EXPRESSIONGRAPH_SOLVER_REGISTRY

#include <string>
#include <map>
#include <boost/shared_ptr.hpp>
#include <expressiongraph/solver_factory.hpp>

namespace KDL {

/**
 *   This is a singleton class, you can get the single instance 
 *   using SolverRegistry::instance. It maintains a list of
 *   SolverFactory classes that can create a solver of a given type.
 *   Parameters can be given using a ParameterList class (i.e. hash string->doubles).
 *
 *   The purpose is to have a unified way to create the solvers for all available drivers
 *   for eTaSL (eTaSL-RTT, etasl-py, and possible future drivers), and to make it easier
 *   to plugin new types of solvers.  (i.e. avoid combinatorial explosion of code)
 */
class SolverRegistry {
    public:
        typedef typename boost::shared_ptr<SolverRegistry> Ptr;
    private:
        typedef std::map< std::string, SolverFactory::Ptr> RegistryMap;
        RegistryMap rmap;
    
        
        static typename SolverRegistry::Ptr instance;

    public: 

        SolverRegistry() {}


        /**
         * gets a new instance of the solver registry with the known solvers registered.
         */
        static SolverRegistry::Ptr getInstance();

        /**
         * register a factory with this registry using the given name
         */
        void registerFactory(SolverFactory::Ptr fctry, const std::string& name);

        /**
         * return the factory with the given name
         *  (result is a clone of the factory in the registry, so it is completely independent of the result of subsequent calls)
         */
        SolverFactory::Ptr getFactory(const std::string& name);

        /**
         * gets documentation of the parameters of a given solver
         */

        void getDocumentation(const std::string& name, DocList& dlist );

        /**
         * create solver
         *     0 : success
         *    -1 : could not find solver with the given name, no object returned
         *    -2 : unknown parameter in parameter list, if tolerate_other_param is false
         *    -3 : parameter not specified and require_all_param is true
         *
         * @param name : name of the solver to use
         * @param plist : list of parameters
         * @param tolerate_other_param: true if parameters unrelated to the solver may be in the list
         * @param require_all_parameters : true if all parameters need to be specified
         * @param [out] p  solver that is created
         */
        int createSolver( const std::string& name, const ParameterList& plist, 
                          bool tolerate_other_param, 
                          bool require_all_param, 
                          boost::shared_ptr<solver>& p);

};

}; // namespace KDL

#endif
