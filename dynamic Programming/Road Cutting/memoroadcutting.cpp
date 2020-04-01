#include<iostream>
using namespace std;
int memo[100];
int maxprofit(int arr[],int totoallen)
{
if(memo[totoallen]!=-1)
{
return memo[totoallen];
}	

if(totoallen==0)
{
	return 0;
}

int best=0;

for (int i = 1; i <=totoallen; ++i)
{
	int profit=arr[i] + maxprofit(arr,totoallen-i);
   best=max(best,profit);
}
memo[totoallen]=best;

return best;
}


int main()
{
int priceofeachlen[100];
int totoallen;
cin>>totoallen;

for (int i = 1; i <=totoallen; ++i)
{cin>>priceofeachlen[i];	/* code */
}

for (int i = 1; i <=totoallen; ++i)
{
	memo[i]=-1;
}

int ans=maxprofit(priceofeachlen,totoallen);
cout<<ans;
return 0;

}