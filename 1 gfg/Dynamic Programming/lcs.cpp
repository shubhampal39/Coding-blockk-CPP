//Longest Common Subsequence

#include<iostream>//header file
#include<climits>
using namespace std;

int main()
{
 int t;
 cin>>t;
 while(t--)
 {
	 	int a,b;
	    cin>>a>>b;
	    char aa[a],bb[b];
	
	    for(int i=0;i<a;i++)
	    {
	    	cin>>aa[i];
	    }
	    for(int i=0;i<b;i++)
	    {
	    	cin>>bb[i];
	    }

	    int abc[a+1][b+1];

	   
	   for(int i=0;i<=b;i++)
	    {
	    	abc[0][i]=0;
	    }

  	   for(int i=0;i<=a;i++)
	    {
	    	abc[i][0]=0;
	    }

	  for(int i=0;i<=a;i++)
    {
    	for(int j=0;j<=b;j++)
    	{
    		cout<<abc[i][j]<<" ";
    	}
    	cout<<'\n';
    }
  



	  for(int i=1;i<=a;i++)
	  {
	  	for(int j=1;j<=b;j++)
	  	{
	       if(aa[i-1]==bb[j-1])
	       {
	       		abc[i][j]=abc[i-1][j-1]+1;
	       }
	       else
	       {
	           abc[i][j]=max(abc[i][j-1],abc[i-1][j]);
	       }
	  	
	  	}

	  }

    for(int i=0;i<=a;i++)
    {
    	for(int j=0;j<=b;j++)
    	{
    		cout<<abc[i][j]<<" ";
    	}
    	cout<<'\n';
    }

 		cout<<abc[a][b]<<endl;
 }


return 0;
}