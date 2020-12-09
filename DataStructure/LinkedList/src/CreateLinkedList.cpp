#include "CreateLinkedList.h"

//Create Linked List with info as ++data.
node* CreateLinkedList( size_t sz)noexcept
{	
	node* start=nullptr;
	node* tail=nullptr;

	int count=1;
	while(count<=sz)	
	{
		node* temp = new node;
		temp->info=++data;
		temp->next=nullptr;
			
			
	    if(start==nullptr)
		{
			start=temp;
			tail=temp;
		}
		else
		{
			tail->next=temp;
			tail=temp;			
			
		}
		count++;
	}
		
	return start;
}


//PrintLinkedList. 
void PrintLinkedList(node* list)
{ 	
	CheckListEmpty(list);
	node *p=list;
	 while(p!=nullptr)
	 {
		 std::cout<<"info:"<<p->info<<std::endl;
		 p=p->next;
	
	 }
}

//Count Nodes.
int CountNodes(node* start)
{	CheckListEmpty(start);
	
	int node_count=0;
	auto p=start;
	while(p!=nullptr)
	{
		node_count++;
		p=p->next;
	}
	
	
	return node_count;
}


//CheckList is empty or not.
bool CheckListEmpty(node*  start)
{
	if(start==nullptr)
		throw std::exception("List  is Empty !!");		
	else 
		return false;
	
}

//Find the given number in list.
int Search(node*start, int num)
{
	CheckListEmpty(start);
	
	node* p= start;
	int position=1;
	
	while(p!=nullptr)
	{
	    if(p->info==num)
		{
			break;
		}
		else
		{
			p=p->next;
			position++;
		}	
	}	
	
	if(p==nullptr)
	{
		throw std::exception("  Number Not  Found !!");
	}
	else
	{
		return position;
		
	}
	
}