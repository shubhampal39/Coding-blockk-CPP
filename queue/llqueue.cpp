#include<iostream>
#include<list>
using namespace std;
class Queue
{
	int cs;
	list<int> qu;	
public:	
	Queue()
	{
		this->cs=0;
	}

	bool isEmpty() 
	{
		return this->cs==0;
	}

	void enqueue(int data)
	{
		this->qu.push_back(data);
		this->cs+=1;
	}

	void dequeue()
	{   if(isEmpty())
		{

		this->cs-=1;
		this->qu.pop_front();
	
		}	
	}

	void getfront()
	{
		return this->qu.front();
	}
};


int main(int argc, char const *argv[])
{
	Queue q(10);
	q.enqueue(1);
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.dequeue();
	while(!q.isEmpty())
	{
		cout<<q.getfront()<<endl;
		q.dequeue();
	}
  
	return 0;
}
