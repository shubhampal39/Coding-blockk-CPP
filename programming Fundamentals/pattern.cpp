#include<iostream>//header file
using namespace std;
	

int main()
{
int n;
cin>>n;

 for(int i=0;i<=n;i++)
 {
 	for (int space = 0; space <=n-i; ++space)
 	{
 		cout<<" ";
 	}
 	
 	//increasing value
 	int val=i;
 	for (int cnt = 1; cnt <=i ; cnt++)
 	{
 		cout<<val;
 		val=val+1;
 	}
 		//decresing Number
 	val=val-2;
 	for (int cnt = 1; cnt<=i-1;cnt++)
 	{
 		cout<<val;
 		val=val-1;
 	}
 		cout<<endl;
 }	


	return 0;
}