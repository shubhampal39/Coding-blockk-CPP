#include<iostream>
using namespace std;
void towerofhanoi(int n,char src,char dest,char helper)
{
	if(n==0)
	{
		return;
	}
	//first step n-1 disks move from src to helper
	towerofhanoi(n-1,src,helper,dest);

	cout<<"move"<<n<<"disk from"<<src<<"to"<<dest<<endl;

	towerofhanoi(n-1,helper,dest,src);




}

int main()
{
	int n;
	cin>>n;
  towerofhanoi(n,'A','c','B');
  return 0;
}