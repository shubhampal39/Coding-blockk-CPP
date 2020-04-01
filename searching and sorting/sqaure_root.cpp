#include<iostream>
using namespace std;
int square_root(int n,int p)
{
  int s=0;
  int e=n;
  float ans;
  

  while(s<=e)
  {
   int mid=(s+e)/2;
    if(mid*mid==n)
    {
    	ans=mid;
      break;	
    }   
    if(mid*mid<n)
  	{
		  s=mid+1;
      ans=mid;
  	}
  	else
  	{  
  			s=mid-1;
  	}
  }

   float inc=0.1;
    for (int i = 0; i < p; ++i)
     {
      while(ans*ans<=n)
      {
        ans+=inc;
      }
      ans=ans-inc;
      inc=inc/10;
    }

return ans;

}

int main()
{
   cout<<square_root(2,3)<<endl;
    cout<<square_root(3,3)<<endl;
cout<<square_root(49,1)<<endl;
return 0;
}