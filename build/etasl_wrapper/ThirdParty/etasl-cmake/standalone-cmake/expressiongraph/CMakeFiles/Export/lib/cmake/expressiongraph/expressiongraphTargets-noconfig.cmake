#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "expressiongraph::expressiongraph" for configuration ""
set_property(TARGET expressiongraph::expressiongraph APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(expressiongraph::expressiongraph PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libexpressiongraph.so"
  IMPORTED_SONAME_NOCONFIG "libexpressiongraph.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS expressiongraph::expressiongraph )
list(APPEND _IMPORT_CHECK_FILES_FOR_expressiongraph::expressiongraph "${_IMPORT_PREFIX}/lib/libexpressiongraph.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
