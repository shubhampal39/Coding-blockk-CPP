#include<bits/stdc++.h>
using namespace std;
int coinchange(int arr[],int coin,int change)
{
if(change==0)
{
	return 0;
}

int ans=INT_MAX;
for (int i = 0; i < coin; ++i)
{
	if(change-arr[i]>=0)
	{
		int subproblem=coinchange(arr,coin,change-arr[i]);
		ans=min(subproblem+1,ans);
	}
}

return ans;


}

int main()
{
	int n;
 int arr[]={1,3,5};
cin>>n;
 cout<<coinchange(arr,3,n);
	return 0;
}