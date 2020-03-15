
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

cin>>n;
int ans=fact(n);
cout<<ans;
	return 0;
}