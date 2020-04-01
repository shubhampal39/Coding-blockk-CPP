#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{

	int b[10]={0};
	for (int i = 0; i < 10; ++i)
	{
			cout<<b[i]<<" ";
	}

	cout<<endl;

	int a[10]={1,2,3};
	for (int i = 0; i < 10; ++i)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
	cout<<sizeof(a)<<endl;
	int size=sizeof(a)/sizeof(int);

	cout<<"no of element is array "<<size<<endl;



	return 0;
}
