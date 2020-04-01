#include<iostream>//header file
using namespace std;
//it doesnt no accept space and newline string like "abc def"
int main()
{

  char ch;
  ch=cin.get();

  while(ch!='.')
  {
  	cout<<ch;
  	ch=cin.get();

  }


	return 0;
}