#include<iostream>
using namespace std;
int lis(int arr[100],int n)
{
	int dp[100];

	for (int i = 0; i < n; ++i)
	{
		dp[i]=1;
	}

		
	for (int i = 1; i < n; ++i)
	{  int best=-1;
		for (int j = 0; j < i; ++j)
		{
			if(arr[i]>arr[j])
			{
			  best=max(best,dp[j]+1);	
			}
		}
		dp[i]=best;
	}
	
int best=0;
for (int i = 0; i <n; ++i)
{
	best=max(best,dp[i]);
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

return 0;}