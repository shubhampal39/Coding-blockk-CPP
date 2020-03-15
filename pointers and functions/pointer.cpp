#include<iostream>//header file
using namespace std;

int main()
{


	 int y1=10;
     int *xptr;
 xptr=&y1;
 cout<<&y1<<endl;
 cout<<xptr<<endl;

//deference operator
 cout<<*xptr<<endl;
 cout<<*(&y1)<<endl;
  
 cout<<*(&xptr)<<endl;
 cout<<&(*xptr)<<endl;

 cout<<&xptr<<endl;
 int **xxptr=&xptr;
 cout<<xxptr<<endl;

	return 0;
}