#include<iostream>
using namespace std;
class node{
  public:
	int data;
	node *next;
	//constructor
	node(int d)
	{
		data=d;
		next=NULL;
	}
};

void insertAtHead(node* &head,int data)
{
	node *n=new node(data);
	n->next=head;
	head=n;
}


void insertAtTail(node* &head,int data)
{
   if(head==NULL)
   {
   	head=new node(data);
   	return;
   }
   node *tail=head;
   while(tail->next!=NULL)
   {
   	tail=tail->next;
   }
    tail->next=new node(data);
    return;

 }  	
int len(node *head)
{ int len=0;
	while(head!=NULL)
	{
    head=head->next;
    len++;
	}
	return len;
}

void insertAtMiddle(node* &head,int data,int pos)
{
   if(head==NULL||pos==0)
   {
   	 insertAtHead(head,data);
   }
   else if(pos>len(head))
   {
    	insertAtTail(head,data);
   }
   else
   {
   		int jump=1;
   		node *temp=head;  		
   		while(jump<=pos-1)
   		{
   			temp=temp->next;
   			jump+=1;
   		}
   		node *n=new node(data);
   		n->next=temp->next;
   		temp->next=n;
   }
}

void deletedAtHead(node *&head)
{
	if(head==NULL)
	{
		return;
	}
	node *temp=head;
	head=head->next;
	delete temp;
	return;
}

void deletedAtTail(node *&head){
node *prev=NULL;
node *temp=head;
	while(temp->next!=NULL)
	{
		prev=temp;
		temp=temp->next;
	}
		
	delete temp;
	prev->next=NULL;
	return;
}

void deletedAtMiddle(node *head, int p)
{
	if(head==NULL)
	{
		return;
	}
	p=p-1;
	while(p--)
	{
		head=head->next;
	}
	node *temp=head->next;
    head=head->next->next;
    delete temp;
    return;

}

bool searchrecursive(node  *head,int key)
{
	if(head==NULL)
	{
		return false;
	}
	if(head->data==key)
	{
		return true;
	}
	else{
		return searchrecursive(head->next,key);
	}

}
bool searchiterative(node *head,int key)
{
	while(head!=NULL)
	{
		if(head->data==key)
		{
			return true;
		}
		head=head->next;
	}
	return false;
}

void print(node *head)
{

	node *temp=head;
	while(temp!=NULL)
	{
		cout<<"->"<<temp->data<<" ";
		temp=temp->next;
	}

}


void buildlist(node *&head)
{
	int data;
	cin>>data;
	while(data!=-1)
	{
		insertAtTail(head,data);
		cin>>data;
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
node * reverserecursive(node *&head)
{
	if(head==NULL || head->next==NULL)
	{
		return head;
	}
   node *smallhead=reverserecursive(head->next);
   node *c=head;
   c->next->next=c;
   c->next=NULL;
   return smallhead;

}

node *midpoint(node *head)
{
	if(head==NULL|| head->next==NULL)
	{
		return head;
	}
	node *slow=head;
	node *fast=head->next;

	while(fast!=NULL && fast->next!=NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}

	return slow;
}


int main()
{
	node *head=NULL;
	 buildlist(head);
	print(head);	
	//print(head);
	
	//cout<<endl;
    //reverse(head);
    //	print(head);
     cout<<midpoint(head);

}