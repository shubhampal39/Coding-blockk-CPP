#include<iostream>
#include<cstring>
using namespace std;
string abc[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//string colour[4] = { "Blue", "Red", 
  //                       "Orange", "Yellow" }; 
void print(int arr[],int i,int n,int key)
{
if(i==n)
{
  cout<<"absent";
  	return;
}
if(arr[i]==key)
{
	cout<<"present at position"<<i;
	return;
}

print(arr,i+1,n,key);


}

int main()
{
   int arr[]={1,2,3,4,5};
   print(arr,0,5,13);
	return 0;
}