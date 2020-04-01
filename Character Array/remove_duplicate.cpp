//remove consecutive duplicate
#include <iostream>
#include<cstring>
using namespace std;

void removeDeuplicates(char a[])
{
	int l=strlen(a);
	if(l==1 or l==0)
	{
		return;
	}
	int prev=0;
	for (int i = 1; i < l; ++i)
	{
		if(a[i]!=a[prev])
		{
			prev++;
			a[prev]=a[i];
		}
	}
	a[prev+1]='\0';
}

int main()
{
	char a[1000];
	cin.getline(a,100);
	removeDeuplicates(a);
	cout<<a<<endl;	
	return 0;
}