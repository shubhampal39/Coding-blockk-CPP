//pass by value
#include<iostream>//header file
using namespace std;

void increment(int *num)
{
	*num+=1;
	cout<<*num<<endl;

}

int main()
{
int a=10;
increment(&a);
cout<<"Inside main "<<a;
	

	char ch='A';
	cout<<ch<<endl;
	cout<<&ch<<endl;//A+garbage
	cout<<(int *)&ch<<endl;//A+garbage
return 0;
}