#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int a[10]={1,2,4,7,9,5,0,3,6,10};
	int large=INT_MIN;
	int small=INT_MAX;
	for (int i = 0; i < 10; ++i)
	{
		if(a[i]>large)
		{
			large=a[i];
		}
		if(a[i]<small)
		{
			small=a[i];
		}
	}

	cout<<"large:"<<large<<endl<<"small:"<<small;


	return 0;
}
