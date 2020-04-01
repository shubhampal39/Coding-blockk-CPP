#include<bits/stdc++.h>
using namespace std;

int findwaystoreach(int n,int k)
{
	int dp[100]={0};

	dp[0]=dp[1]=1;


for (int i = 2; i <=k; ++i)
{
	dp[i]=2*dp[i-1];
}

for (int i = k+1; i <=n; ++i)
{
	dp[i]=2*dp[i-1]-dp[i-k-1];
}




 for (int i = 0; i <=n; ++i)
 {
 	cout<<dp[i]<<" ";
 }

  return dp[n];

}

int main()
{
int n,k;
int dp[100]={0};
cin>>n>>k;
int ans=findwaystoreach(n,k);
cout<<"ways to rach top: "<<ans;
return 0;
}