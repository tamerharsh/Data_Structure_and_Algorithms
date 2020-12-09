#include <iostream>
#include <exception>
#include "CreateLinkedList.h"

int main ()
{
	
try{	
	//CreateLinkedList.
	auto list=CreateLinkedList(10);
	
	//PrintLinkedList.
	PrintLinkedList(list);
	
	//Count Nodes.
	auto number_of_nodes=CountNodes(list);
	
	std::cout<<"number_of_nodes"<<number_of_nodes<<std::endl;
	
	
	//Search a number in the list.
	int location=Search(list,15);
	
	std::cout<<"Location of number is:"<<location<<std::endl; 

}
catch(std::exception &e)
{
	std::cout<<e.what();
	
}
	return 0;
	
}