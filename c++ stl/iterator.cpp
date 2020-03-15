#include<iostream>
#include <cstring>
using namespace std;
template <typename T>

int search(T arr[],int n,T key)
{
	for (int i = 0; i < n; ++i)
	{
		if(arr[i]==key)
		{
			return i;
		}

	}
	return n;
}


for

int main()
{
  int arr[]={1,2,3,4,5,6,7};
	//char arr[]={'A','b','c','d','e'};
	 //float arr[]={1.1,2.2,3.4,4.6,5.2,6,7};
   int n=sizeof(arr)/sizeof(int);
	
 //	int n=sizeof(arr)/sizeof(float);
	int k=2;
//int n=sizeof(arr)/sizeof(float);
		//float k=5.2;
	cout<<search(arr,n,k)<<endl;;
return 0;
}