#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;


int main()
{
char s[100]="Today is a rainy day";
char *ptr=strtok(s," ");
cout<<ptr<<endl;

/*
ptr=strtok(NULL," ");
cout<<ptr<<endl;
*/
while(ptr!=NULL)
{ptr=strtok(NULL," ");
 cout<<ptr<<endl;

}

return 0;

}