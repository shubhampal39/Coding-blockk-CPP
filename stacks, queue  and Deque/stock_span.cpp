#include<iostream>
#include<stack>
using namespace std;

void printSpan(int arr[],int n)
{
	stack<int>s;
	int ans[100]={0};
	for(int day=0;day<n;day++)
	{
	  int curr_val=arr[day];	
      while(!s.empty() && arr[s.top()]<curr_val)
      		s.pop();

      int bettervalue=s.empty()?0:s.top();
      int span=day-bettervalue;
      ans[day]=span;
      s.push(day);

	}


  for (int i = 0; i < n; ++i)
  {
  	/* code */cout<<ans[i]<<" ";
  }

}

int main(){
int n=7;
int arr[]={100,80,60,70,60,75,85};
printSpan(arr,n);
return 0;
}