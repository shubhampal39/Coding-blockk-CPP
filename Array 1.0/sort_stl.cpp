

#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
return a>b;

}

int main()
{
 	int a[10]={2,5,6,9,1,3,4,7,8,10};

 	int n=10;
 	//sort(a,a+n);//ascending
 	sort(a,a+n,compare);
 	for (int i = 0; i < 10; ++i)
	 	{
	 		cout<<a[i]<<" ";
	 	}
	
	return 0;
}