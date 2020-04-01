#include<iostream>
#include<cstring>
using namespace std;
string abc[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//string colour[4] = { "Blue", "Red", 
  //                       "Orange", "Yellow" }; 
void print(int n)
{
if(n==0)
{
	return;
}


print(n/10);
cout<<abc[n%10]<<" ";

}

int main()
{
   int n;
   cin>>n;
  print(n);
	return 0;
}