#include<iostream>
using namespace std;
int main() {
	int n1,n2;
	cin>>n1>>n2;
	while(n1--)
	{
		int w=3*n1+2;
		if(w%4==0)
		{continue;}
		cout<<w<<endl;
	}
	return 0;
}