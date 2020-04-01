#include<iostream>
#include<cstring>
using namespace std;
int main()
{

string s0;
string s1("Hello");

string s2="Hello World";
string s3(s2);
string s4=s3;
char a[]={'a','b','c','\0'};
string s5(a);

cout<<s0<<endl;
cout<<s1<<endl;
cout<<s2<<endl;
cout<<s3<<endl;
cout<<s4<<endl;
cout<<s5<<endl;

if(s0.empty())
{
	cout<<"s0 is an empty string"<<endl;
}
//append
s0.append("I love C++");

s0+="and python";//s0+python

cout<<s0<<endl;

//remove
cout<<s0.length()<<endl;
s0.clear();

cout<<s0.length()<<endl;

//campare two string
s0="Apple";
s1="Mango";

cout<<s0.compare(s1)<<endl;//return an integer

//operator overloaded operator
if(s1>s2)
{
	cout<<"Mango is lexi greater than apple"<<endl;
}

cout<<s1[0]<<endl;

string s="I want to have apple juice";

int indx=s.find("apple");
cout<<indx<<endl;


//remove a wor from the length
string word="apple";
int len=word.length();

s.erase(indx,len);

cout<<s<<endl;

//iterate over all character

for (int i = 0; i < s1.length(); ++i)
{
	cout<<s1[i]<<" ";
}
cout<<endl;
for (auto it =s.begin(); it!=s.end();it++)
{
	cout<<(*it)<<" ";
}

cout<<endl;
for(auto c:s1)
{
	cout<<c<<" ";
}


return 0;

}