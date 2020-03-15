#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void getans(int a[],int n,int target)
{


    int l=0,r=n-1;
    
        while(l<r)
    {
    	if(target==a[l]+a[r])
    	{
    		cout<<a[l]<<" and "<<a[r]<<endl;
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

    getans(a,n,target);    
	return 0;
}