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
		int minelement=i;
  	  
  	  for (int j = i+1; i < n;j++)
	  {	  		  	    
	  		if(a[j]<a[minelement])
	  		{
	  			minelement=j;
	  		}

	  }
	  
	  swap(a[i],a[minelement]);
	}


	for (int i = 0; i < n; i++)
	{
		cout<<a[i];
	}


 return 0;

}