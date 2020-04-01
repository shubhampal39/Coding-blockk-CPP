#include<iostream>//header file
using namespace std;

int main()
{


	//comma operator
	int a,b,c;
	//assignment operator
	a=10;
	b=20;
	c=30;

	//logical operator
	if(c>a and c>b)
	{
		cout<<"c is largest"<<endl;
	}

	//ternary operator
	int x=c%2==0?1:0;
	cout<<x<<endl;
	c%2==0?cout<<"even":cout<<"odd";
	cout<<endl;

	//bitwise operator
		x=5;
		int y=7;
		cout<<" AND"<<(x&y)<<endl;
		cout<<"OR"<<(x|y)<<endl;
		cout<<"XOR"<<(x^y)<<endl;
	
	//shift operator
		x=x<<2;
		cout<<x<<endl;
		cout<<(y>>1)<<endl;
//unary operATOR

cout<<(&x)<<endl;
//post increment and decrement operator
a=10;
int z=a++;
cout<<z<<endl;
z=++a;
cout<<z<<endl;

//compount operator
 a=10;
a%=5;
cout<<"a after modulo "<<a<<endl;
b=5;
b<<=1;
cout<<"a after left shift "<<b<<endl;



	return 0;
}