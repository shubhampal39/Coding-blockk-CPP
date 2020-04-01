#include<iostream>
using namespace std;
int traling_zeros(int n)
{  int ans=0;

	for (int i =5 ; n/i>0;i=i*5)
	{
		ans=ans+(n/i);
	}

	return ans;
}

int main()
{
	int n;
	cin>>n;
	cout<<traling_zeros(n);
	return 0;
}