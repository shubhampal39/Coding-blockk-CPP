#include<iostream>//header file
using namespace std;

int main()
{
	int n;
	cin>>n;

	int a[n];
	
	/*for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<",";
	}
	*/
	
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
	int k,i;
	cin>>k;


	for ( i = 0; i < n; ++i)
	{
		if(a[i]==k)
		{
			cout<<"element found";
			break;
		}
	}
  if(i==n)
  {
  	cout<<"element not found";
  }



	return 0;
}