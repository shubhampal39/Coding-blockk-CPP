#include<bits/stdc++.h>
using namespace std;
int main() {
   int a,b,c;
   cin>>a>>b;
   priority_queue<int,vector<int>,greater<int>> q;

   for(int i=0;i<a;i++)
   {
	   for(int j=0;j<b;j++)
	   {
		   cin>>c;
		   q.push(c);

	   }
   }
	
	while(q.empty()==false)
	{
		cout<<q.top()<<" ";
		q.pop();

	}

	return 0;
}