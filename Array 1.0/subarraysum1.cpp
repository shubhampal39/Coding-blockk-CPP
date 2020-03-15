#include<iostream>//header file
using namespace std;

int main()
{

	int n,currsum,ans=0,left=-1,right=-1;
	cin>>n;
	int a[n];
	/*for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<",";
	}
*/
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			currsum=0;
			for (int k = i; k<=j; k++)
			{
				currsum+=a[k];
                      	/* code */
			}
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