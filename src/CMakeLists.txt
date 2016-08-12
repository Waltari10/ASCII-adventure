#include_directories (${QuickEscape_SOURCE_DIR}/engine)
#link_directories( ${QuickEscape_BINARY_DIR}/engine)

add_executable( QuickEscape adventure.cpp)
target_link_libraries( QuickEscape LINK_PUBLIC QEngine)

add_custom_target(copy)
add_custom_command(TARGET copy PRE_BUILD
				   COMMAND ${CMAKE_COMMAND} -E
				   copy ${CMAKE_SOURCE_DIR}/playerdata.txt ${CMAKE_BINARY_DIR}/src)
				   
add_dependencies( QuickEscape copy)