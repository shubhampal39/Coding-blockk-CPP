#include<bits/stdc++.h>
using namespace std;
int findwaystoreach(int n,int k)
{
	if(n==0)
	{
		return 1;
	}

	/*if(dp[n]!=0)
	{
		return dp[n];
	}
*/
	int ways=0;

	for (int i = 1; i <=k; ++i)
	{    //we dont wnt call on negative state
		if(n-i>=0)
		{
			ways+=findwaystoreach(n-i,k);
		}
	}

  return ways;

}

int main()
{

int n,k;
cin>>n>>k;
cout<<findwaystoreach(n,k);
return 0;

}