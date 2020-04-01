#include<iostream>//header file
using namespace std;
//it doesnt no accept whitespaces string like "abc def"
int main()
{

  char ch;
  cin>>ch;
  while(ch!='.')
  {
  	cout<<ch;
  	cin>>ch;

  }


	return 0;
}