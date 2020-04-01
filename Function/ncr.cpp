#include<iostream>
using namespace std;

int factorial(int n)//function decleration
{
	//function defination
	
	int ans=1;

	for (int i = 1; i <= n; ++i)
	{
		ans*=i;
	}

	return ans;
}

int NCR(int n,int r)
{
int ans=factorial(n)/(factorial(n-r)*factorial(r));

return ans;
}

int main()
{

cout<<"Enter a Number"<<endl;

int n,r; cin>>n>>r;
cout<<NCR(n,r)<<endl;//function call or invocation


return 0;
}