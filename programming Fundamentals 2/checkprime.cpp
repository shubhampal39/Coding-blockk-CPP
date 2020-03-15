#include<iostream>//header file
using namespace std;

int main()
{
	int n,i;
	cin>>n;
	for ( i = 2; i < n; ++i)
	{
		if(n%i==0)
		{
			cout<<"is not prime";
			break;
		}
	}

    if(i==n)
  	{cout<<"It is Prime"<<endl;}
	


	return 0;
}