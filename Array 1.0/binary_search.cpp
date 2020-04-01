//recursive
#include<iostream>
using namespace std;
void binary_search(int a[],int s,int e,int key)
{
int mid=(s+e)/2;
if(s>e)
{
	cout<<"no element found"<<endl;
	return;
}
if(a[mid]==key)
{
	cout<<key<<"found at position"<<mid<<endl;
}
if(a[mid]>key)
{
  return	binary_search(a,s,mid-1,key);
}

if(a[mid]<key)
{
	return	binary_search(a,mid+1,e,key);
}


}



int main()
{
int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=10;
	binary_search(a,0,n,10);

return 0;
}