#include<iostream>
using namespace std;

void merge(int a[],int s,int e )
{
  int mid=(s+e)/2;
  int i=s,j=mid+1,k=s;
  int temp[100];
  while(i<=mid && j<=e)
  {
  	if(a[i]<a[j])
  	{
  		temp[k++]=a[i++];
  	}
  	else
  		{temp[k++]=a[j++];}
  }

while(i<=mid)
{
	temp[k++]=a[i++];
}
while(j<=e)
{
	temp[k++]=a[j++];
}

	for(int i=0;i<=e;i++)
	{
		a[i]=temp[i];
	}
}


void mergesort(int a[],int s,int e)
{
	if(s>=e)
	{
		return;
	}
  int mid=(s+e)/2;
  //divide
  mergesort(a,s,mid);
  mergesort(a,mid+1,e);
  //merge
 merge(a,s,e);


}
int main()
{

int arr[]={1,2,3,4,0,5,9};
mergesort(arr,0,6);

for (int i = 0; i < 7; ++i)
{
	cout<<arr[i]<<" ";
}

return 0;

}