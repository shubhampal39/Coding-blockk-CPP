#include<iostream>
using namespace std;
void pair_sum(int a[],int n,int s)
{
	int i=0,j=n;
	while(i<j)
	{
	   int curr_sum=a[i]+a[j];

	   if(curr_sum==s)
	   {
	   		cout<<a[i]<<" and "<<a[j]<<endl;
	   		i++;j--;
	   }
	   else if(curr_sum>s)
	   {
	   		j--;
	   }
	   else if(curr_sum<s)
	   {
	   		i++;
	   }
	}

}
int main(int argc, char const *argv[])
{
	int a[]={1,3,5,7,10,11,12,13};
   
     int n=8;
     int s=16;
     pair_sum(a,n-1,s);

	return 0;

}