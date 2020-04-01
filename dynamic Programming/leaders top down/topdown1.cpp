#include<bits/stdc++.h>
using namespace std;
int findwaystoreach(int n,int k,int dp[])
{
	if(n==0)
	{
		return 1;
	}

	if(dp[n]!=0)
	{
		return dp[n];
	}

	int ways=0;

	for (int i = 1; i <=k; ++i)
	{    //we dont wnt call on negative state
		if(n-i>=0)
		{
			ways+=findwaystoreach(n-i,k,dp);
		}
	}

  return dp[n]=ways;

}

int main()
{

int n,k;
cin>>n>>k;
int dp[100]={0};
cout<<findwaystoreach(n,k,dp)<<endl;
return 0;

}