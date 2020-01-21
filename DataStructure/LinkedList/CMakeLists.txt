
add_library(list_lib src/CreateLinkedList.cpp)
target_include_directories(list_lib PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/> 
)
install(FILES include/CreateLinkedList.h DESTINATION install/LinkedList/include)
install(FILES src/CreateLinkedList.cpp DESTINATION install/LinkedList/src)
