#include<bits/stdc++.h>
using namespace std;

int first_occ(int a[],int n,int key)
{
	int s=0;
	int e=n-1;
    int ans=-1;
	while(s<=e)
	{

		int mid=(s+e)/2;
		if(a[mid]==key)
		{
			ans=mid;
			e=mid-1;
		}
		else if(a[mid]>key)
		{
			e=mid-1;
		}
		else{
			s=mid-1;
		}

	}
	return ans;


}

int main()
{
int a[]={1,2,3,3,3,3,4,5};
int n=8;
int key=3;
int ans=first_occ(a,n,2);
cout<<"first occ of 2 is"<<ans<<endl;
return 0;
}
