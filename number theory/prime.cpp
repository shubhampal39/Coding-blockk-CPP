#include<iostream>
using namespace std;
bool check(int n)
{
if(n==1)
{
	return true;
}
for (int i = 1; i*i <n ; ++i)
{
	if(n%i==0)
	{	
	  return true; 
	}
}

return false;
}


int main()
{
int n;
cin>>n;

if(check(n))
{
	cout<<"it is notprime ";
}
else
{
	cout<<"it is prime";
}

	return 0;
}