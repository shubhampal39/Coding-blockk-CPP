#include<iostream>
using namespace std;

bool issorted(int a[],int n)
{
	if(n==1)
	{
		return true;
	}

	if(a[0]<a[1] && issorted(a+1,n-1))
	{
		return true;
	}

	return false;
}


int main()
{
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	if(issorted(a,n))
		cout<<"it is sorted";
	else
		cout<<"it is not sorted";

	return 0;
}