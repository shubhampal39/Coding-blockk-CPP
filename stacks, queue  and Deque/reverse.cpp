//reverse stack using 1 stack
#include<iostream>
#include<stack>
using namespace std;
void insertATbottom(stack<int>&s,int x)
{
	if(s.empty())
	{
		s.push(x);
		return;
	}
	
	int y=s.top();
	s.pop();
	insertATbottom(s,x);
	s.push(y);

}

void reversestack_recursion(stack<int> &s)
{
	if(s.empty())
	{
		return;
	}

	int x=s.top();
	s.pop();

	reversestack_recursion(s);
	insertATbottom(s,x);
}
void transfer(stack<int> &s1,stack<int> &s2,int n)
{
	for(int i=0;i<n;i++)
	{
		s2.push(s1.top());
		s1.pop();
	}
}

void reversestack(stack<int> &s1)
{
	stack<int> s2;
	int n=s1.size();
	for(int i=0;i<n;i++)
	{
		int x=s1.top();
		s1.pop();
		transfer(s1,s2,n-i-1);
		s1.push(x);
		transfer(s2,s1,n-i-1);
	}

}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);
	//reversestack(s);
	reversestack_recursion(s);
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}
return 0;
}