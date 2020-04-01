#include<bits/stdc++.h>
using namespace std;
void sortarray(int *a,int n)
{	int l=0,hi=n,mid=0;

while(mid<=hi)
{
	if(a[mid]==1)
	{
		mid++;
	}
	else if(a[mid]==2)
	{
		swap(a[mid],a[hi]);
		hi--;
	}
	else
	{
		swap(a[mid],a[l]);
		l++;
		mid++;
	}

}


}

int main()
{
	int a[]={2,2,0,2,1,2,2,1,1,2,2,0,1,1,0,0,1,0,0,2,1,1,1,2};
	int n=sizeof(a)/sizeof(int);
	sortarray(a,n-1);
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}