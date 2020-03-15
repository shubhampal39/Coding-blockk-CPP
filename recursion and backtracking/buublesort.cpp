#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{


if(n==1)
{//cout<<i;
	return;
}
for(int j=0;j<=n-2;j++)
{

if(arr[j]>arr[j+1])
{
	swap(arr[j],arr[j+1]);
	//cout<<"adg";
}

}
bubble(arr,n-1);

}

void bubblesort2(int a[],int j,int n)
{
	if(n==1)
	{
		return;
	}

	if(j==n-1)
	{
		bubblesort2(a,0,n-1);
	}
	//rec case
	if(a[j]>a[j+1])
	{
		swap(a[j],a[j+1]);

	}

   bubblesort2(a,j+1,n);
}


int main()
{
   int arr[]={3,4,5,7,1};
   
   	//bubble(arr,5);
  bubblesort2(arr,0,5);
   for (int i = 0; i < 5;i++)
   {
   	cout<<arr[i]<<" ";
   }
   
	return 0;
}