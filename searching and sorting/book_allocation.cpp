#include<bits/stdc++.h>
using namespace std;
#define ll long long int

bool isvalidConfig(ll books[],ll n, ll k,ll ans)
{
	int student=1;
	ll curr_pages=0;

	for (int i = 0; i < n; ++i)
	{
		if(curr_pages+books[i]>ans)
		{
			curr_pages=books[i];
			student++;
			if(student>k)
				return true;
		}
		else
		{
			curr_pages+=books[i];
		}
	}
	return true;
}


ll binarysearch(ll books[],ll n,ll k)
{
	ll total_pages=0;
	ll s,e=0;

	for (int i = 0; i < n; ++i)
	{
		total_pages+=books[i];
	}

	e=total_pages;
	s=books[n-1];
	int finalans=0;
	while(s<=e)
	{

		ll mid=(s+e)/2;

		if(isvalidConfig(books,n,k,mid))
		{
			finalans=mid;
			e=mid-1;
		}
		else
		{
			s=mid-1;
		}

	}

return finalans;

}


int main()
{
	ll n;
	ll k;
	cin>>n>>k;

	ll books[1000005];

	for (int i = 0; i <n; ++i)
	{
		cin>>books[i];
	}

  cout<<binarysearch(books,n,k);
	return 0;
}