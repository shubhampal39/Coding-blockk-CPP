//https://hack.codingblocks.com/app/contests/204/p/646
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int dp[10001][10001];

int solvecellproblem(int ro,int col)
{
   if(dp[0][0]==-1)
   {
   	return 0;
   }

	for (int i = 0; i <= ro; ++i)
	{
		if(dp[0][i]==-1)
		{
			break;
		}
		dp[0][i]=1;
	}

	for (int i = 0; i <=col ; ++i)
	{
		if(dp[i][0]==-1)
		{
			break;
		}
		dp[i][0]=1;
	}

	for (int i = 1; i < ro; ++i)
	{
		for (int j = 1; j < col; ++j)
		{
			if(dp[i][j]==-1)
			{
				continue;
			}
			dp[i][j]=0;
			if(dp[i][j-1]!=-1)
			{
				dp[i][j]=dp[i][j-1]%mod;
			}
			if(dp[i-1][j]!=-1)
			{
				dp[i][j]=dp[i][j]+dp[i-1][j]%mod;
			}

		}
	}

	if(dp[ro-1][col-1]==-1)
	{
		return 0;
	}

	return dp[ro-1][col-1];

}

int main(int argc, char const *argv[])
{

	memset(dp,0,sizeof(dp));

int m,n,p;
cin>>m>>n>>p;
for (int i = 0; i < p; ++i)
{
	int x,y;
	cin>>x>>y;
	dp[x-1][y-1]=-1;
}

cout<<solvecellproblem(m,n)<<endl;

	return 0;
}