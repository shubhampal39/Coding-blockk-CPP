#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dp[100]={0};

int minstep(int n)
{
if(dp[n]!=0)
{
	return dp[n];
}

if(n<=1)
{
	return 0;
}

int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;

if (n%3==0)
	q1=minstep(n/3);

if(n%2==0)
	q2=minstep(n/2);

q3=minstep(n-1);


	int ans= min(q1,min(q2,q3))+1;

   dp[n]=ans;

   return dp[n];

}

int main()
{
	int n;
	cin>>n;
	cout<<minstep(n);
	return 0;
}