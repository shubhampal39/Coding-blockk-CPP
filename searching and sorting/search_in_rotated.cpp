#include<iostream>
using namespace std;
int binary_rotate_search(int a[],int s,int e,int key)
{
  if(s>e)
  {
    return -1;
  }
  
    int mid=(s+e)/2;
    
    if(a[mid]==key)
    {
      return mid; 
    }

  if(a[s]<=a[mid])
  {
   if(key>=a[s] && key<=a[mid])
    {
      return binary_rotate_search(a,s,mid-1,key);
    }
      else
    {
    return binary_rotate_search(a,mid+1,e,key);
    }
  }
  
  if(key>=a[mid] && key<=a[e])
  {
     
      return binary_rotate_search(a,mid+1,e,key);
  }
  return binary_rotate_search(a,s,mid-1,key);

}
int main()
{
	 int a[]={10,11,1,2,3,4,5,6,7,8,9};
	 int n=sizeof(a)/sizeof(int);
   int key;
   cin>>key;
	 cout<<"index of  "<<key<<" is "<<binary_rotate_search(a,0,n-1,key);
	 return 0;

}