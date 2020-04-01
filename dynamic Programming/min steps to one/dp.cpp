#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dp[1000]={0};


int minstep(int n)
{

dp[0]=0;
dp[1]=0;
	
	for(int i=2;i<=n;i++)
		{
        int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;
			if(i%2==0)
			{
		       q1=dp[i/2];
			}
			if(i%3==0)
			{
				q2=dp[i/3];
			}
		     q3=dp[i-1];

		 dp[i]=min(q1,min(q3,q2))+1;

		}

return dp[n];
}

int main()
{

	int n;
	cin>>n;
	cout<<minstep(n);

	return 0;
}