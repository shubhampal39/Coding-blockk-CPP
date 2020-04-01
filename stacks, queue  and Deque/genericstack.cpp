#include<iostream>
#include<vector>
using namespace std;
//template<typename T,typename U>
template<typename T>
class stack
{
	vector<T> v;
//	vector<U> v2;
public:
 void push(T data)
 {
 	v.push_back(data);
 }

bool empty()
{
	return v.size()==0;
}
 void pop()
 {
 	if(!v.empty())
 	{
 		v.pop_back();
 	}

 }

 T top()
 {
 	return v[v.size()-1];
 }

};
int main()
{
	stack <char>s;
/*	for(int i=1;i<=5;i++)
	{
		s.push(i*i);
	}
*/
	for(int i=65;i<=75;i++)
	{
		s.push(i);
	}

	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}

return 0;
}