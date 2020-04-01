#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;

		long long a[n],b[n];

		for(long long i=0;i<n;i++)
		{
		cin>>a[i];

		}


	       	for(long long i=0;i<n;i++)
		{
		cin>>b[i];

		}
		sort(a,a+n);
		sort(b,b+n);
	       long long sum=0;

		for(long long i=0;i<n;i++)
		{
		  if(a[i]<=b[i]){sum+=a[i];}
		else{sum+=b[i];}   		
                }

		cout<<sum<<endl;
	} 

}
