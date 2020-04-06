#include<iostream>
using namespace std;
int binary_search(int a[],int n,int key)
{

  int s=0;
  int e=n;
  while(s<=e)
  {
  	int mid=(s+e)/2;
    if(a[mid]==key)
    {
    	return mid;	
    }   
   else if(a[mid]>key)
  	{
		e=mid-1;  	
  	}
  	else
  	{  
  			s=mid+1;
  	}


  }

return -1;


}
int main()
{
	 int a[]={1,2,3,4,5,6,7,8,9};
	 int n=sizeof(a)/sizeof(int);
	 cout<<"index of 5 is "<<binary_search(a,n-1,5);
	 return 0;

}