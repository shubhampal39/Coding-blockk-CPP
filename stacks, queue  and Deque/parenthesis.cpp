#include<iostream>
#include<stack>
#include<cstring>
using namespace std;
bool checkparenthis(string s)
{
	stack<char>st;
	for (int i = 0; i < s.size(); ++i)
	{
		char curchar=s[i];
		if(curchar=='(')
		{
			st.push(curchar);
		}
		else if(curchar==')')
		{
			if(st.empty()|| st.top()!='(')
			{
				return false;
			}

			st.pop();
		}

	}
	return st.empty();
}
int main()
{
  string str;
  cin>>str;
  if(checkparenthis(str))
  {
  	cout<<"correct";
  }
  else
  {
  	cout<<"not correct";
  }


	return 0;
}