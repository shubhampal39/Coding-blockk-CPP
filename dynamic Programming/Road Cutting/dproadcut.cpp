#include<iostream>
using namespace std;
int dp[100]={};
int maxprofit(int arr[],int totoallen)
{
	for(int len=1;len<=totoallen;len++)
	{ 
		int best=0;
		for (int cut= 1; cut <=len; cut++)
		{
			best=max(best,arr[cut]+dp[len-cut]);
		}
		dp[len]=best;
	}
	return dp[totoallen];
}


int main()
{
int priceofeachlen[100];
int totoallen;
cin>>totoallen;

for (int i = 1; i <=totoallen; ++i)
{cin>>priceofeachlen[i];	/* code */
}

int ans=maxprofit(priceofeachlen,totoallen);
cout<<ans;
return 0;

}