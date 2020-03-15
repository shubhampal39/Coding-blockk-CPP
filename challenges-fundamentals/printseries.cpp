#include<iostream>
using namespace std;
int main() 
{
	int n1,n2;
	cin>>n1>>n2;
	int w=0,n=1,i=n1;

	while(i--)
	{
		w=3*n+2;
		if(w%n2!=0)
		{
		cout<<w<<endl;
		n++;
		i--;
		}
		
	}

	return 0;
}