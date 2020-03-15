#include<iostream>
using namespace std;

int checkpower(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	return a*checkpower(a,b-1);
}

int fastpower(int a,int b)
{
	if(b==0)
	{
		return 1;
	}
	int smallAns=fastpower(a,b/2);
	smallAns*=smallAns;

	if(b&1){return a*smallAns;}
	return smallAns;
}

int main()
{
  int a,b;
  cin>>a>>b;

  cout<<checkpower(a,b)<<endl;;
  cout<<fastpower(a,b)<<endl;
	return 0;
} 