#include<iostream>//header file
using namespace std;

int main()
{
	int N,p;
	cin>>N>>p;

	float ans=0;
	float inc=1.0;

	for (int i = 0; i <=p;i++)
	{


			while(ans*ans<=N)
			{
		     ans=ans+inc;
			}
  

     ans=ans-inc;
     
     inc=inc/10;
/* code */
	}


     cout<<ans<<endl;

	return 0;
}