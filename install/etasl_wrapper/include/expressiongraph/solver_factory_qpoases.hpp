#ifndef EXPRESSIONGRAPH_SOLVER_FACTORY_QPOASES
#define EXPRESSIONGRAPH_SOLVER_FACTORY_QPOASES
/**
 * file: expressiongraph_solver_factory_qpoases.hpp
 *
 * purpose:
 *   defines a solver factory that creates an instance of the qpoases solver for eTaSL
 *
 * author: 
 *   Erwin Aertbelien, 2019
 *
 * part of eTaSL
 */
#include <expressiongraph/solver_registry.hpp>


namespace KDL {
    /**
     * registers a factory for a qpOASESSolver to the given registry
     * \param reg: registry
     * \param name: name under which to register it
     */ 
    void registerSolverFactory_qpOases(SolverRegistry::Ptr reg, const std::string& name );


}; // namespace KDL

#endif
