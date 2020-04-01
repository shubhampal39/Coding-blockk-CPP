#include<bits/stdc++.h>
using namespace std;
int dp[100]={0};

int coinchange(int arr[],int coin,int change)
{


for (int n = 1; n <= change; ++n)
{  
	dp[n]=INT_MAX;
	for (int i = 0; i < coin; ++i)
	{
		if(n-arr[i]>=0)
		{
		//	dp[n]=min(dp[n],dp[n-arr[i]]+1);	
		 int subproblem= dp[n-arr[i]];
		 dp[n]=min(dp[n],subproblem+1);

		}
	}
	
   
}


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