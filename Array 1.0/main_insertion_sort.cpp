

	#include<iostream>
using namespace std;
void insertion_sort(int a[],int n)
{   
	 
	 	for (int i = 1; i<n; ++i)
		{
			int element=a[i];
		
   			int j=i-1;
   			while(j>=0 and a[j]>element)
            {
            	a[j+1]=a[j];
            	j=j-1;
            }
            a[j+1]=element;
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