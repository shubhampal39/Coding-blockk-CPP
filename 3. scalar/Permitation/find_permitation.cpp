//https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
#include<bits/stdc++.h>
using namespace std;
void permitation(string s1,int i,int j)
{
	if(i==j)
	{	
		cout<<s1<<endl;
			}

for (int length= i; length <= j; ++length)
{
	swap(s1[length],s1[i]);
	permitation(s1,i+1,j);
	swap(s1[i],s1[length]);
	
}


}


int main()
{
	 string s1="ABC";
	 permitation(s1,0,s1.size()-1);
	return 0;
}