#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

void findwater(int arr[],int n)
{   int lefta[n];
    int righta[n];
    int ans=0;
    int left=0;
    for (int i = 0; i < n-1; ++i)
    {
       left=max(arr[i],left);
       lefta[i]=left;
    }
    int right=0;
    for (int i = n-1; i>=0; --i)
    {
        right=max(arr[i],right);
        righta[i]=right;
    }

    for (int i = 0; i < n-1; ++i)
    {
        ans+=min(lefta[i],righta[i])-(arr[i]);
    }

   cout<<ans;

}

int main() {
	int n,target;
	cin>>n;
	int a[n];

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
    findwater(a,n);
    return 0;
}