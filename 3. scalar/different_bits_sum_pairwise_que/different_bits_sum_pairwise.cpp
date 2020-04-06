#include<bits/stdc++.h>
using namespace std;

int Solution(vector<int> &A) {
   
    long long int ans=0;
    int count;
    for(int i=0;i<32;i++)
    {
        int count=0;
        for(int j=0;j<A.size();j++)
        {
         if(A[j]&1<<i)
         {
             count++;
         }
        }
        ans+=2*count*(A.size()-count);
        ans%=1000000007;
    }
    return (int)ans;
    
}

int main()
{/*
int n;
cin>>n;*/
vector<int> v {1,3,5};
cout<<Solution(v);
return 0;
}