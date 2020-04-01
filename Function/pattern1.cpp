#include<iostream>
using namespace std;
/* PATTERN BELOW
ABCDE
ABCD
ABC
AB
A*/
void pattern(int n)//function decleration
{
	//function defination
	
	for (int i = 0; i < n; ++i)
	{
		int cout_alpha=n-i;
		char alpha='A';
		for (int j = 0; j<cout_alpha  ; ++j)
		{
			cout<<alpha<<" ";
			alpha++;
		}
		cout<<endl;
	}

}

int main()
{

int n; cin>>n;
pattern(n);//function call or invocation


return 0;
}