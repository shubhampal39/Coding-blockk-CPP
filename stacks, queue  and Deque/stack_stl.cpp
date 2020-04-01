#include<iostream>
#include<stack>
using namespace std;
int main()
{
 


	stack <char>s;

	for(int i=65;i<=75;i++)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
return 0;

}