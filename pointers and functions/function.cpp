
//finding ncr
#include<iostream>//header file
using namespace std;

int fact(int num)
{
	int ans=1;
	for (int i = 1; i <= num; ++i)
	{
		/* code */ans*=i;
	}
	return ans;

}

int main()
{
int n,r;

cin>>n>>r;

int nfact=fact(n);
int rfact=fact(r);
int nrfact=fact(n-r);
int ans=nfact/(rfact*(nrfact));

cout<<ans;
	return 0;
}