//binary to decimal
#include<iostream>//header file
using namespace std;

int main()
{
  int t;
  cin>>t;
  while(t--)
  {
	  	int no;
	  	cin>>no;
	  	int p=1,ans=0;

	   while(no>0)
	   {
	   	int r=no%10;
	   	ans=ans+r*p;
	   	p=p*2;
	   	no=no/10;
	   }
		cout<<ans<<endl;
	  }

	return 0;
}