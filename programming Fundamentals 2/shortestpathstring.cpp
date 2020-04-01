#include<iostream>//header file
using namespace std;
//it doesnt no accept space and newline string like "abc def"
int main()
{

  char ch;
  ch=cin.get();

  int x=0,y=0;
  while(ch!='\n')
  {
  	if(ch=='N' or ch=='n')
  	{
      y++;
  	}

  	if(ch=='S' or ch=='s')
  	{
  		y--;
  	}

  	if(ch=='E' || ch=='e')
  	{
  		x++;
  	}

  	if(ch=='W' || ch=='w')
  	{
  		x--;
  	}

  	ch=cin.get();
  }
 

  	cout<<"distance of x:"<<x<<" y:"<<y<<endl;

	return 0;
}