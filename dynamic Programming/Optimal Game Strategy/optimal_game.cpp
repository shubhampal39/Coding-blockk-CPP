#include<bits/stdc++.h>
using namespace std;
int optimalgame(int a[],int i,int j)
{

if(i>j)
{
	return 0;
}

int a1=a[i]+min(optimalgame(a,i+2,j),optimalgame(a,i+1,j-1));
int a2=a[j]+min(optimalgame(a,i,j-2),optimalgame(a,i+1,j-1));

return max(a1,a2);

}

int main()
{
   int n;
   cin>>n;
   int a[n];
   for (int i = 0; i < n; ++i)
   {
   	cin>>a[i];
   }
  cout<<optimalgame(a,0,n-1);

	return 0;
}