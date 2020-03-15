#include<iostream>//header file
using namespace std;

int main()
{


	int x=10;
	cout<<&x<<endl;

	float y=10.5;
	cout<<&y<<endl;
	//it does not work for character variable
	char ch='A';
	cout<<&ch<<endl;
	//explicite typecasting from char to void
	//now char "ch" convert to void 

	cout<<(void *)&ch<<endl;
	//pointer
	int *xptr;
	xptr=&x;


	cout<<&x<<endl;
	cout<<xptr<<endl;
	//resasign another address to the variable
  int y1=20;

 xptr=&y1;
 cout<<&y1<<endl;
 cout<<xptr<<endl;

//deference operator
 cout<<*xptr<<endl;
 cout<<*(&y1)<<endl;



	return 0;
}