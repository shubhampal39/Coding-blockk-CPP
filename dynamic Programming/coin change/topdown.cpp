#include<bits/stdc++.h>
using namespace std;
int dp[100]={0};
int coinchange(int arr[],int coin,int change)
{
if(change==0)
{
	return 0;
}
if(dp[change]!=0)
{
	return dp[change];
}

int ans=INT_MAX;
for (int i = 0; i < coin; ++i)
{
	if(change-arr[i]>=0)
	{
		int subproblem=coinchange(arr,coin,change-arr[i]);
		ans=min(subproblem+1,ans);
	}
}
dp[change]=ans;

return dp[change];


}

int main()
{
int n=15;
int arr[]={1,7,10};
//cin>>n;
 cout<<coinchange(arr,3,n);
	return 0;
}