#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int arr[]={18,10,11,9,19};
	int n=sizeof(arr)/sizeof(int);

	int key;
	cin>>key;
	auto it=find(arr,arr+n,key);
	int index=it-arr;
	if(index==n)
	{
		cout<<"not found"<<endl;
	}
	else
	{
		cout<<index<<endl;
	}

return 0;
}