#include<iostream>//header file
using namespace std;

int main()
{

	int n,currsum,ans=0,left=-1,right=-1;
	cin>>n;
	int a[n],cumsum[10000]={0};

	/*for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<",";
	}
*/  cin>>a[0];
	cumsum[0]=a[0];

	for (int i = 1; i < n; ++i)
	{
		cin>>a[i];
		cumsum[i]=cumsum[i-1]+a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			currsum=0;
			currsum=cumsum[j]-cumsum[i-1];
			if(currsum>ans)
			{
				ans=currsum;
				left=i;
				right=j;
			}

		}
		
	}

		cout<<ans<<endl;
		for (int i = left; i<=right; ++i)
		{
			cout<<a[i]<<" ,";
		}


	return 0;
}