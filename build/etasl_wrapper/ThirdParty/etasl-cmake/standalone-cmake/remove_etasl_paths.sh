#
# script to restore the original paths after set_etasl_paths.sh
#

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


export LUA_PATH="$ETASL_OLD_LUA_PATH"
export LUA_CPATH="$ETASL_OLD_LUA_CPATH"
pathrm "/home/masterthesis/kaixi_crospi_ws/install/etasl_wrapper/bin"
