#include <iostream>
#include<cstring>
#include<bits/stdc++.h>
using namespace std;
string extractStriingAtkey(string str,int key)
{
	char *s=strtok((char *)str.c_str()," ");
	while(key>1)
		{
			s=strtok(NULL," ");
			key--;
		}
		return (string) s;

}
int convertInt(string s)
{int ans=0;
	int p=1;
	for (int i = s.length()-1;i>=0;i--)
	{
		ans+=(s[i]-'0')*p;
		p=p*10;
	}
	return ans;


}

bool numricCmpare(pair<string,string>s1, pair<string, string> s2)
{
	string key1,key2;
	key1=s1.second;
	key2=s2.second;

	return convertInt(key1)<convertInt(key2);
}


bool lexiCmpare(pair<string,string>s1, pair<string, string> s2)
{
	string key1,key2;
	key1=s1.second;
	key2=s2.second;

	return key1<key2;

}

int main()
{
/*	string s("10 20 30 40 ");
*/	int n;
	cin>>n;
/*	cout<<extractStriingAtkey(s,n);
*/
	cin.get();
	string a[100];
	for (int i = 0; i < n; ++i)
	{
		getline(cin,a[i]);
	}
	int key;

	string reverse,ordering;
	cin>>key>>reverse>>ordering;
	pair<string, string> strpair[100];
	for (int i = 0; i < n; ++i)
	{
		strpair[i].first=a[i];
		strpair[i].second=extractStriingAtkey(a[i],key);

	}

	if(ordering=="numeric")
		{sort(strpair,strpair+n,numricCmpare);}
	else
	{
		sort(strpair,strpair+n,lexiCmpare);
	}
	if(reverse=="true")
	{
		for (int i = 0; i < n/2; ++i)
		{
			swap( strpair[i],strpair[n-1-i]);
		}
	}

	for (int i = 0; i < n; ++i)
	{
		cout<<strpair[i].first<<endl;
	}

}