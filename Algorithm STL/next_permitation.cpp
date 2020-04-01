#include<bits/stdc++.h>
using namespace std;
int main()
{
  int arr[]={10,20,30,40,50};

  int n=sizeof(arr)/sizeof(int);
  
   for (int i = 0; i < n; ++i)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl;
  rotate(arr,arr+2,arr+n);

  for (int i = 0; i < n; ++i)
  {
    cout<<arr[i]<<" ";
  }

  cout<<endl<<"for vector"<<endl;
 
  vector<int> v={1,2,3}; 
   /* rotate(v.begin(),v.begin()+3,v.end());
  */
  for (int i = 0; i < v.size(); ++i)
  {
    cout<<v[i]<<" ";
  }

  cout<<endl;

  next_permutation(v.begin(),v.end());
  
  for(int x:v)
  {
    cout<<x<<" ";
  }

	return 0;
}