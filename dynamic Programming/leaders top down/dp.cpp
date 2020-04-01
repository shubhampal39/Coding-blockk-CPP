#include<bits/stdc++.h>
using namespace std;

int findwaystoreach(int n,int k)
{
	int dp[100]={0};

	dp[0]=1;

	for (int i = 1; i <=n;i++)
	{  	dp[i]=0;
			for (int j=1; i<=k;j++)
			{//avid negative call
				if(i-j>=0)
				{
					dp[i] += dp[i-j];
				}
			}
	}

	/*
 for (int i = 0; i <=n; ++i)
 {
 	cout<<dp[i]<<" ";
 }
*/
  return dp[n];

}

int main()
{
int n,k;
int dp[100]={0};
cin>>n>>k;
cout<<"ways to rach top: "<<findwaystoreach(n,k)<<endl;
return 0;
}