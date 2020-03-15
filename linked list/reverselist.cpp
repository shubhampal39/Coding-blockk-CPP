#include<iostream>
using namespace std;
class node{
	int data;
	node *next;

	node(data)
	{
		this->data=data;
	}
}

void reverse(node *&head)
{
  node *c=head;
  node *p=NULL;
  node *nextnode;
  while(c!=NULL)
  {
  	nextnode=c->next;
  	c->next=p;
  	p=c;
  	c=nextnode;
  }
  head=p;

}

int main()
{

}