#include<iostream>//header file
using namespace std;

int main()
{


	int *p=new int(30);
	cout<<*p<<endl;

  int *q=new int;
	cout<<*q<<endl;
	
	int *arr=new int[30];
	for (int i = 0; i < 3; ++i)
	{
		/* code */arr[i]=i;
	}
	
	for (int i = 0; i < 30; ++i)
	{
		/* code */cout<<arr[i];
	}

	delete p;
	delete q;
	
	delete [] arr;
	return 0;
}