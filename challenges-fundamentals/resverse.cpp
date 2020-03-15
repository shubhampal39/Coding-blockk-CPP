#include<iostream>
using namespace std;
int main() {
int no;
cin>>no;
int sum=0;

while(no)
{
	sum=sum*10;
	sum=sum+no%10;;
	no=no/10;
}
cout<<sum<<endl;

	return 0;
}