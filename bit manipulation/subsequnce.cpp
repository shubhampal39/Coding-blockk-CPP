#include<iostream>
#include<cstring>
using namespace std;
void filterchar(char a[],int n)
{
	int j=0;
	while(n>0)
	{
		if(n&1)
		{
			cout<<a[j]<<" ";
		} 
		j++;
		n=n>>1;
	}


}

void print(char a[])
{
	int n=strlen(a);
	for(int i=0;i<(1<<n);i++)
	{
		filterchar(a,i);
		cout<<endl;
	}
}

int main()
{
char a[100];
cin>>a;
print(a);
}