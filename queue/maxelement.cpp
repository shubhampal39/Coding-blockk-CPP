#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
using namespace std;

int main(int argc,char const *argv[])
{
	queue<char> qu;
	unordered_map<char,int> mp;
	//vector<int>mp;
	char ch;
	cin>>ch;
	while(ch!='.')
	{
		qu.push(ch);
		mp[ch]++;
		cout<<mp[ch];
		//cout<<map.first;
		while(!qu.empty())
		{
			if(mp[qu.front()]>1)
			{
				qu.pop();
			}
			else
			{
			cout<<qu.front()<<endl;
			break;
	      	}
	    }  	
		  if(qu.empty())
		   {
			cout<<"-1"<<endl;
		}
		cin>>ch;
		

	}
	return 0;
}