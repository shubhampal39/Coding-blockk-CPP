#include<iostream>  
using namespace std;
int check(string a,string b,int m,int n)
{
if(m==0||n==0)
{

	return 0;
}
if(a[])
int q1=check(a,b,m+1,n+1);//replacement
int q2=check(a,b,m+1,n);//deletion
int q3=check(a,b,m,n+1);

return min(q1,min(q2,q3));

}


int main()
{
string a,b;
cin>>a>>b;

cout<<check(a,b);


return 0;
}