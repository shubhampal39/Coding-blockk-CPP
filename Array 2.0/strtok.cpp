
#include<iostream>//header file
#include<cstring>
using namespace std;

int main()
{
	char str[]="Hi am teaching about string , in c++";

	char *ptr;
	ptr=strtok(str," ");
	cout<<ptr<<endl;
	/*ptr=strtok(NULL," ");
	cout<<ptr<<endl;
  
	ptr=strtok(NULL," ");
	cout<<ptr<<endl;*/

	while(ptr!=NULL)
	{
     cout<<ptr<<endl;
      ptr=strtok(NULL,"  ,");
	
	}

	return 0;
}