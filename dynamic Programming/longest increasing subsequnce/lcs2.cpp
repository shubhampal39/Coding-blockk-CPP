#include<iostream>
using namespace std;
int lis(int arr[100],int n)
{
	int dp[100];

	for (int i = 0; i < n; ++i)
	{
		dp[i]=1;
	}

	int best=-1;
	for (int i = 1; i < n; ++i)
	{  for (int j = 0; j < i; ++j)
		{
			if(arr[j]<=arr[i])
			{
			  dp[i]=max(dp[i],dp[j]+1);	
			}
		}
		best=max(best,dp[i]);
	}
int ans=0;
for (int i = 0; i <n; ++i)
{
	//ans=max(ans,dp[i]);
	cout<<dp[i]<<" ";
}

return best;
}


int main()
{
 int a[100];
 int n;
 cin>>n;

for (int i = 0; i < n; ++i)
{
	cin>>a[i];
}

cout<<lis(a,n);
return 0;
}