#include<iostream>
using namespace std;
int partation(int *a,int s,int e)
{
	int i=s-1;
	int j=s;
	int pivote=a[e];

	for ( ;j<e;j++){
		if(a[j]<=pivote)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return i+1;



}


void quicksort(int *a,int s,int e )
{
	if(s>=e)
	{
		return;
	}

 int p=partation(a,s,e);
 
 quicksort(a,s,p-1);
 quicksort(a,p+1,e);

}


int main()
{
//int n;
//cin>>n;
int arr[]={2,3,4,5,1,3,4,5};
int n=sizeof(arr)/sizeof(int);
quicksort(arr,0,n-1);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

}
