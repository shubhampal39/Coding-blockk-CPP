#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int no;
	int result=0;
    int a[n];
	for (int i = 0; i < n; ++i)
	{
	  cin>>no;
	  a[i]=no;
	 result=result^no;
	}
    
    //cout<<result<<endl;
    int temp=result;
    int pos=0;
  
    while((result&1)!=1)
    {
     pos++;
    	result=result>>1;
    }
   // cout<<pos<<endl;
  int mask=(1<<pos);
 //cout<<mask<<endl;
  
  int first=0;
  int second=0;

  for (int i = 0; i < n; ++i)
  {
  	if((mask&a[i])>0)
  	{
  			first=first^a[i];
    } 		
  }

  second=temp^first;

  cout<<first<<second;


	return 0;

}