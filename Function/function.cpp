#include<iostream>
using namespace std;
void sayhello()
{
	cout<<"SAY HELLOW"<<endl;
}

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

int main()
{

cout<<"before function"<<"\n";
sayhello();
cout<<"after function"<<"\n";
cout<<"Enter a Number"<<endl;

int n; cin>>n;
//factorial(n);
cout<<factorial(n)<<endl;//function call or invocation


return 0;
}