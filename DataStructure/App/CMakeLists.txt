project(DataStructure)

add_executable(app  SampleLinkedList.cpp )
target_link_libraries(app list_lib)

install(TARGETS app DESTINATION install/LinkedList/bin)