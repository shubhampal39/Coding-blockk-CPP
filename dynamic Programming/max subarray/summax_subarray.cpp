#include<bits/stdc++.h>
using namespace std;

int maxsum(int a[],int n)
{
// int dp[100]={0};
 //for positive ans
//dp[0]=a[0]>0?a[0]:0;
 int current_sum=0;
int max_so_far=0;

		for (int i = 1; i < n; ++i)
		{
			current_sum+=a[i];
			if(current_sum<0)
			{
				current_sum=0;
			}

			max_so_far=max(current_sum,max_so_far);
	
		}

	return max_so_far;
}

int main()
{

int arr[]={-3,2,5,-1,6,3,-2,7,-5,2};
int n=sizeof(arr)/sizeof(int);
cout<<maxsum(arr,n)<<endl;
return 0;

}