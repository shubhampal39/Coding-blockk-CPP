//Longest Common Subsequence

#include<iostream>//header file
#include<climits>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {  
    int n;
 	cin>>n;
 	int a[n];
 	
 	for(int i=0;i<n;i++)
 	{
 		cin>>a[i];
 	}
	
    int aa[n];
 	for(int i=0;i<n;i++)
 	{
 		aa[i]=1;
 	}
 	

 	for(int i=1;i<n;i++)
 	{
 		for(int j=0;j<i;j++)
 		{
           if(a[i]>a[j] && aa[i]<aa[j]+1)
           {
           	aa[i]=aa[j]+1;
           }
 		}
 	}

 	 //return *mix_element(lis,lis+n);

 	int r=0;
    for(int i=0;i<n;i++)
 	{
 		r=max(r,aa[i]);
 	}	
 	cout<<r<<endl;

  }


return 0; 
 }