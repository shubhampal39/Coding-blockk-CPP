#include<iostream>
using namespace std;
int main() {

	int no,e;
	cin>>no>>e;
	int count=0;
	while(no)
	{
		int r=no%10;
		if(r==e)
		{
			count++;
		}
		no=no/10;
	}

	cout<<count<<endl;
	return 0;
}