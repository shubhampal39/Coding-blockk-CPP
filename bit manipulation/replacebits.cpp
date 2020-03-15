#include<iostream>//header file
using namespace std;

 int clearrangebit(int n,int i,int j)
   {
   			int mask1=(~0)<<(j+1);
   			int b=(1<<i)-1;
   			int mask2=mask1|b;
   			   mask2=n|mask2;
   			return mask2& mask1;


   }

int replacebits(int n,int m,int i,int j)
{
	int n_=clearrangebit(n,i,j);
	int ans=n_|(m<<i);
	return ans;
}


int main()
{
	int n=15;
	int i=1,j=3;
	int m=2;
	cout<<replacebits(n,m,i,j);
	return 0;
}