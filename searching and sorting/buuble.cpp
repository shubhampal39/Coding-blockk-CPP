#include<iostream>//header file
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		cin>>a[i];
	}


	for (int i = 0; i < n;i++)
	{
	  for (int j = 1; i < n-i;j++)
	  {	  	
	  		if(a[j-1]>a[j])
	  		{
               int temp=a[j-1];
               a[j-1]=a[j];
               a[j]=temp;
	  		}

	  }
	}


	for (int i = 0; i < n; i++)
	{
		cout<<a[i];
	}


 return 0;

}