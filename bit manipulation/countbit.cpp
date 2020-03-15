#include<iostream>
#include<algorithm>
using namespace std;
//first method
int setbitcount(int n)
{
	int ans=0;
	while(n>0)
	{
		ans+=(n&1);
		n=n>>1;
	}

	return ans;

}
//seocnd mwthod
int setbitcount1(int n)
{
	return __builtin_popcount(n);
}

//third method

int setbitcount2(int n)
{
   int ans=0;

   while(n>0)
   {
   	n=n&(n-1);
   	ans++;
   }	
return ans;
}




int main()
{
  int n;
  cout<<setbitcount(5)<<endl;
  cout<<setbitcount1(5)<<endl;
  cout<<setbitcount2(5)<<endl;
	return 0;
}