#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[5][3]={0};
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
			//cin>>a[i][j];
			a[i][j]+=1;
		}
	}

	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 3; ++j)
		{
				cout<<a[i][j];
		}
	}
	return 0;
}