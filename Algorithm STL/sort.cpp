#include<iostream>
#include<algorithm>
using namespace std;
bool comparator(int a,int b){
return a>b;

}
int main()
{
	int arr[] = { 10, 12, 8, 8, 8, 8, 9, 9, 10, 10 }; 
    
    int n = sizeof(arr) / sizeof(arr[0]); 
    sort(arr,arr+n,comparator);

  for (int i = 0; i < n; ++i)
  {
  	cout<<arr[i]<<" ";
  }

return 0;
}