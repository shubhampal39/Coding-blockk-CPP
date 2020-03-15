#include<iostream>//header file
using namespace std;

int main()
{

	int n,currsum,ans=0,left=-1,right=-1;
	cin>>n;
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}


	int cs=0;
	for (int i = 0; i < n; i++)
	{
		cs=cs+a[i];
		if(cs<0)
		{
			cs=0;
		}	
		ans=max(cs,ans);
	}

	cout<<ans<<endl;
	

	return 0;
}