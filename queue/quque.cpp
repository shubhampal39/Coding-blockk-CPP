#include<iostream>
using namespace std;
class Queue
{
int *arr;
int cs;
int ms;
int front;
int rear;

public:

	Queue(int default_size=7)
	{   this->front=0;
		this->rear=default_size-1;//just like -1
		this->ms=default_size;
		this->cs=0;
		this->arr=new int[this->ms]();

	}
	bool IsFull()
	{
		return this->cs==this->ms; 
	}

	bool Empty()
	{
		return this->cs==0;
	} 

	void enqueue(int data)
	{
		if(!IsFull())
		{

		this->rear=(this->rear+1)%ms;
	    arr[this->rear]=data;
	    cs+=1;	
		}

	}
	void dequeue()
	{   if(!Empty())
		{

		this->front=(this->front+1)%ms;
		cs-=1;
		}
	}

	int getFront()
	{
		return arr[this->front];
	}


};

int main(int argc, char const *argv[])
{	Queue q(10);
	q.enqueue(1);
	q.enqueue(5);
	q.enqueue(4);
	q.enqueue(3);
	q.enqueue(2);
	q.dequeue();
	while(!q.Empty())
	{
		cout<<q.getFront()<<endl;
		q.dequeue();
	}
  
	return 0;
}