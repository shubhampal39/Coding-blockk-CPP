#include<iostream>
using namespace std;
void print(char in[],char *out,int i,int j)
{
 if(in[i]=='\0')
 {
 	out[j]='\0';
 	cout<<out<<",";
 	return;
 }

  out[j]=in[i];
  print(in,out,i+1,j+1);
  print(in,out,i+1,j);
}

int main()
{
 	char arr[100];
 	cin>>arr;
 	char out[100];

 	print(arr,out,0,0);
	return 0;
}