
#include<iostream>
using namespace std;
int main()
{
	int n,a;
	cin>>n>>a;
	int ans=1; 
	while(n>0)
	{

		if(n&1)
		{
			ans=ans*a;	
		}
		a*=a;
		n=n>>1;

	}

	cout<<ans<<endl;

return 0;
}