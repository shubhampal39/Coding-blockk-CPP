#include<iostream>//header file
using namespace std;

int main()
{
	int a[10]={1,2,3};
	/*for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<",";
	}
*/
	for (int i = 0; i < 9; ++i)
	{
		cin>>a[i];
	}

	for (int i = 0; i < 9; ++i)
	{
		cout<<a[i]<<",";
	}




	return 0;
}