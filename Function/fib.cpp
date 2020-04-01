#include<iostream>
using namespace std;
int fibonacci(int n)
{  int a=0,c;
   int b=1;
	for (int i =1;i<=n-1;i++)
	{
	c=a+b;
	a=b;
	b=c;
	}

	return c;
}

int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
	return 0;
}