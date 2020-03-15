#include<iostream>
using namespace std;
/*
int main () 
{

   // local variable definition 
   int a = 10;

   // do loop execution 
   do {
      printf("value of a: %d\n", a);
      a = a + 1;
   }while( a < 20 );
 
   return 0;
}
*/



int main() {
	int no;
	cin>>no;
	int sum=0;
  do {
  	sum+=no;
    cin>>no;
  }while(sum>=0);

	return 0;

}
