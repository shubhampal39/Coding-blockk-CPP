#include<iostream>
using namespace std;
int main() {
  int n,k;
  cin>>n;
  for(int i=0;i<n;i++)
  {  
      for(int k=0;k<n-i;k++)
		{
			cout<<" ";	
			}

         if(i==0||i==n-1)
        {
          	for (int l = 0; l < n;l++)
      	   {
      	    cout<<"*";
      	    }
      }
      else{
      	  for (int m = 0; m < n; m++)
      	  {
      	  	  if(m==0||m==n-1)
      	  	  {
      	  	  	cout<<"*";
      	  	  }
      	  	  else
      	  	  {
      	  	  	cout<<" ";
      	  	  }
      	  }
      }
        
	  
	  cout<<endl;
	 }

	return 0;
}