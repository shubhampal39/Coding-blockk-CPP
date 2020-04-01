#include<iostream>
using namespace std;
int gcd(int a,int b)
{
   if(b==0)
   {
   	return a;
   }

	return gcd(b,a%b);
}

int main()
{
  int a,b;
  cin>>a>>b;
  int n=gcd(a,b);
  cout<<"gcd"<<n<<endl;
 cout<<"lcm:"<<(a*b)/n<<endl;

	return 0;
}