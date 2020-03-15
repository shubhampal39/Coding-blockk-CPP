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

istream &operator>>(istream &is,node *&head)
{
	buildlist(head);
	return is;
}


ostream &operator<<(ostream &is,node *&head)
{
     print(head);
     return is;
}

int main()
{
	node *head=NULL;	
	node *head2=NULL;

	cin>>head>>head2;
	cout<<head<<endl<<head2;


}