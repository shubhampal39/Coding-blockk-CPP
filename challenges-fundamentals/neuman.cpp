#include<iostream>
using namespace std;
int main() {
int no,n;
cin>>no;

while(no--)
{
	cin>>n;
	int p=1,sum=0;
	while(n>0)
	{
		 int s=n%10;				
		 sum=sum+s*p;

		 p=p*2;
		 
		 n=n/10;
		
	}
	cout<<sum<<endl;
}
	return 0;
}
