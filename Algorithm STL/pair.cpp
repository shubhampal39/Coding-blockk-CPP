#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
  pair<int,char> p;
  p.first=10;
  p.second='8';

  //anothr way
  pair<int,char> p2(p);
  cout<<p2.first<<endl;
  cout<<p2.second<<endl;

pair<int,string> p3 =make_pair(100,"audi");
cout<<p3.first<<" "<<p3.second<<endl;
int a=10,b=20;
pair<int,int> p4=make_pair(a,b);
pair<pair<int,int>,string> car;
car.second="audi";
car.first.first=10;
car.first.second=20;
cout<<car.second<<endl;
cout<<car.first.first<<endl;
cout<<car.first.second<<endl;

	/* code */
	return 0;
}