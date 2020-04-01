#include<bits/stdc++.h>
using namespace std;
int main()
{
int a=10,b=20;

cout<<a<<" "<<b<<endl;
swap(a,b);
cout<<a<<" "<<b<<endl;


cout<<"max:: "<<max(a,b)<<endl;
cout<<"min:: "<<min(a,b)<<endl;
int arr[]={1,2,3,4,5,6};
reverse(arr,arr+4);
int n=sizeof(arr)/sizeof(int);
for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

cout<<endl;
 next_permutation(arr,arr+n);

for(int i=0;i<n;i++)
{
	cout<<arr[i]<<" ";
}

return 0;


}