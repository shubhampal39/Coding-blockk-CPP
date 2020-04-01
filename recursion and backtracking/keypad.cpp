#include<iostream>
using namespace std;
char keypad[][10]={
"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
void printkeypadstring(char *in,char *out,int i,int j)
{
	if(in[i]=='\0')
	{
		out[j]='\0';
		cout<<out<<" ,";
	   return;
	  } 

  int digit=in[i]-'0';//0 means 48 in ascii

  if(digit==1||digit==0)
  {
  	printkeypadstring(in,out,i+1,j);
  }

  for (int k = 0;keypad[i][k]!='\0'; k++)
  {
  	out[j]=keypad[digit][k];
  	printkeypadstring(in,out,i+1,j+1);
  }


}
int main()
{
	char in[100];
	char out[100];
	cin>>in;
	printkeypadstring(in,out,0,0);
 	return 0;
}