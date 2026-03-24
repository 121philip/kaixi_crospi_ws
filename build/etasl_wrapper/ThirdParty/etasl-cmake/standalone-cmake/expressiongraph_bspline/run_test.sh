
#
# script to adapt lua related paths for etasl:
# run this using "source set_etasl_paths.sh" such that the path variables
# will be defined in the current shell.
#
if [ "x$LUA_PATH" = "x" ]; then
    LUA_PATH=";"
fi
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/../../etasl/expressiongraph_lua/scripts/lib/?.lua"
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/../../etasl/expressiongraph_context_lua/scripts/lib/?.lua"
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/../../etasl/expressiongraph_bspline/scripts/lib/?.lua"
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/src/crospi/etasl_wrapper/ThirdParty/etasl-cmake/standalone-cmake/expressiongraph_bspline/../../etasl/expressiongraph_bspline/test/?.lua"
if [ "x$LUA_CPATH" = "x" ]; then
    LUA_CPATH=";"
fi
export LUA_CPATH="$LUA_CPATH;/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/expressiongraph_bspline/?.so"
export LUA_CPATH="$LUA_CPATH;/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/expressiongraph_lua/?.so"
export LUA_CPATH="$LUA_CPATH;/home/masterthesis/kaixi_crospi_ws/build/etasl_wrapper/expressiongraph_context_lua/?.so"

lua $1
