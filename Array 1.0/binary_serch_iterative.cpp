#include<iostream>
using namespace std;
int  binary_search(int a[],int n,int key)
{
int s=0;
int e=n-1;

while(s<=e)
{
 int mid=(s+e)/2;

	if(a[mid]==key)
	{
		return mid;
	}

	if(a[mid]>key)
	{
	e=mid-1;
	}

	if(a[mid]<key)
	{
	s=mid+1;		
	}
}
return -1;

}



int main()
{
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	cout<<binary_search(a,n,10);

	return 0;
}