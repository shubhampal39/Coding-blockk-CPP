#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

bool compare(string a,string b)
{
	if(a.length()==b.length())
	{
		return a<b; //default lexographically smaller
	}
	return a.length()>b.length();//begger length come first
}

int main()
{
int n;
cin>>n;
cin.get();//extra space

string s[200];//array of string




		for (int i = 0; i < n; ++i)
		{
		getline(cin,s[i]);
		}

		sort(s,s+n,compare);

		for (int i = 0; i < n; ++i)
		{
			cout<<s[i]<<endl;
		}

return 0;

}