//decimal to binary 
#include<iostream>
using namespace std;
int decimaltobinary(int n)
{
int ans=0,p=1;
while(n>0)
{
	int last_bit=(n&1);
	ans+=last_bit*p;
	p=p*10;
	n=n>>1;
}

return ans;
}



int main()
{
  int n;
 cout<<<<decimaltobinary(13);

	return 0;
}