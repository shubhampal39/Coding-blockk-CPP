#include<bits/stdc++.h>
using namespace std;
int profit(int wines[],int i,int j,int y)
{
	if(i>j)
		{return 0;}

int op1=wines[i]*y+profit(wines,i+1,j,y+1);
int opt2=wines[j]*y+profit(wines,i,j-1,y+1);

return max(opt2,op1);


}

int main()
{

int  wines[]={2,3,5,1,4};
int n=sizeof(wines)/sizeof(int);
int y=1;
cout<<profit(wines,0,n-1,y);
return 0;

}