#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	 int arr[] = { 1, 2, 8, 8, 8, 8, 9, 9, 10, 10 }; 
    
    int n = sizeof(arr) / sizeof(arr[0]); 
//	 sort(arr,arr+n);
	 //array must sort for binary seacrch
	int key;
	cin>>key;
	bool it=binary_search(arr,arr+n,key);

	if(it)
	{
		cout<<" found"<<endl;
	}
	else
	{
		cout<<"Absent"<<endl;
	}
// find index of element,use following function
	auto lb=lower_bound(arr,arr+n,key);
	if(lb-arr==n)
	{
		cout<<"Element is not present"<<endl;
	}
	else
	{
	cout<<"lower bound:"<<(lb-arr)<<endl;
	auto ub=upper_bound(arr,arr+n,key);
	cout<<(ub-arr)<<endl;
    cout<<"occurance frq of 8 is "<<(ub-lb)<<endl;			
	}
	return 0;
}