#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void getans(int a[],int n,int target,int i)
{

    target=target-a[i];
    int l=i+1,r=n-1;
    
        while(l<r)
    {
    	if(target==a[l]+a[r])
    	{
    		cout<<a[i]<<", "<<a[l]<<" and "<<a[r]<<endl;
    		l++;
    		r--;
    	}
    	else if(target<(a[l]+a[r]))
    	{
    		r--;
    	}
    	else
    	{
    		l++;
    	}
    }

}

void checktriplet(int a[],int n,int target)
{
   for(int i=0;i<n-3;i++)
   {
      
     getans(a,n,target,i);    
    
   }

}
int main() {
	int n,target;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cin>>target;

	sort(a,a+n);

    checktriplet(a,n,target);
    return 0;
}