#include<bits/stdc++.h>
using namespace std;
int findwaystoreach(int n)
{
	if(n<=1)
	{
		return 1;
	}

return findwaystoreach(n-3)+findwaystoreach(n-2)+findwaystoreach(n-1); 

}

int main()
{

int n;
cin>>n;
cout<<findwaystoreach(n);
return 0;

}