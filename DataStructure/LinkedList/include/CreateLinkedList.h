#include <iostream>

//Linked list structure.
struct node {
	
	int info;
	node* next;
	
};

//Value for assigning to info.
static int data=10;

//CreateLinkedList.
node* CreateLinkedList(size_t )noexcept;

//PrintLinkedList.
void PrintLinkedList(node *);

//Count Nodes.
int CountNodes(node*);

//Returns true for empty list  false =not empty.
bool CheckListEmpty(node* start);

//Find Given Number in List 
int Search(node*, int);