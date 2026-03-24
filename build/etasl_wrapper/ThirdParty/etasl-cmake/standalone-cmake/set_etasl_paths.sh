#
# script to adapt lua related paths for etasl:
# run this using "source set_etasl_paths.sh" such that the path variables
# will be defined in the current shell.
#

# save path such that we are able to restore the old paths:
export ETASL_OLD_LUA_PATH="${LUA_PATH}"
export ETASL_OLD_LUA_CPATH="${LUA_CPATH}"

if [ "x$LUA_PATH" = "x" ]; then
    LUA_PATH=";"
fi
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/lib/etasl1.5/?.lua"
export LUA_PATH="$LUA_PATH;/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/lib/etasl1.5/xml2lua/?.lua"
 
if [ "x$LUA_CPATH" = "x" ]; then
    LUA_CPATH=";"
fi
export LUA_CPATH="$LUA_CPATH;/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/lib/?.so"

pathadd() {
    newelement=${1%/}
    if [ -d "$1" ] && ! echo $PATH | grep -E -q "(^|:)$newelement($|:)" ; then
        if [ "$2" = "after" ] ; then
            PATH="$PATH:$newelement"
        else
            PATH="$newelement:$PATH"
        fi
    fi
}

pathrm() {
    PATH="$(echo $PATH | sed -e "s;\(^\|:\)${1%/}\(:\|\$\);\1\2;g" -e 's;^:\|:$;;g' -e 's;::;:;g')"
}

# example use:
#       pathadd "/foo/bar"
#       pathadd "/baz/bat" after
#       pathrm "/baz/bat"
#       export PATH

pathadd "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/bin" after

