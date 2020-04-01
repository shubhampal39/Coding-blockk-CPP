#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{   
	 
	 	for (int i = 0; i<n; ++i)
		{
			int j,element=a[i];
		
			for (int j = i; j>=0 ; --j)
			{
			    if(a[j]<a[j-1])
			    {
			    	swap(a[j],a[j-1]);
			    }
			    else
			    	{break;}

			}
		}


}



int main()
{
 	int a[10]={2,5,6,9,1,3,4,7,8,10};

 	int n=10;
 	insertion_sort(a,n);
 	for (int i = 0; i < 10; ++i)
 	{
 		cout<<a[i]<<" ";
 	}
	return 0;
}