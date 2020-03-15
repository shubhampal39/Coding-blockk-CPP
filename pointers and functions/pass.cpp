//pass by value
#include<iostream>//header file
using namespace std;

void increment(int num)
{
	num+=1;
	cout<<num<<endl;

}

int main()
{
int a=10;
increment(a);
cout<<"Inside main "<<a;
	return 0;
}