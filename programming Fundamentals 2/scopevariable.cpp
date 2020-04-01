#include<iostream>//header file
using namespace std;

int x=100;
int main()
{

	int x=10;
	cout<<"access local variable "<<x<<endl;

//access Global variable by using ::
	cout<<"access Global variable "<<::x<<endl;



	return 0;
}