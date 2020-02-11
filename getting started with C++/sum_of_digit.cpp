#include<iostream>//header file
using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	while(n)
	{
		int r=n%10;
		sum=sum+r;
		n=n/10;
	}

		cout<<sum;


	return 0;
}