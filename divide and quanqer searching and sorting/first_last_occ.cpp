#include<iostream>
using namespace std;

int first_occ(int a[],int n,int key)
{
		int s=0,e=n-1,ans=-1;
		while(s<=e)
		{
			int mid=(s+e)/2;
			if(a[mid]==key)
			{
				ans=mid;
				e=mid-1;
			}
			else if(a[mid]<key)
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;

			}
		}
		return ans;
}
int last_occ(int a[],int n,int key)
{

		int s=0,e=n-1,ans=-1;
		while(s<=e)
		{
			int mid=(s+e)/2;
			if(a[mid]==key)
			{
				ans=mid;
				s=mid+1;
			}
			else if(a[mid]<key)
			{
				s=mid+1;
			}
			else
			{
				e=mid-1;

			}
		}
		return ans;

}

int main(int argc, char const *argv[])
{
int arr[]={1,2,3,3,3,4,4,5,5,6,6,7,8,8,8,8};
int n=sizeof(arr)/sizeof(int);
int k;cin>>k;

int a=first_occ(arr,n,k);
int b=last_occ(arr,n,k);
cout<<a<<" "<<b;
	return 0;
}
