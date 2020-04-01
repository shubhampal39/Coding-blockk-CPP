#include<iostream>
#include<cstring>  
using namespace std;
int check(char a[],char b[])
{
int dp[101][101]={};
//int m=a.length();
//int n=b.length();
 int m=strlen(a);
 int n=strlen(b);

dp[0][0]=0;
for (int i = 1; i <=n; ++i) //insertion
{
    dp[0][i]=dp[0][i-1]+1;             	/* code */
}

for (int i = 1; i <=m; ++i)//deletion
{
    dp[i][0]=dp[i-1][0]+1;             	/* code */
}


for (int i = 1; i <=m ; ++i)
{
	for (int j = 1; j <=n ; ++j)
	{
		int q1=dp[i-1][j-1];//replacement
		int q2=dp[i-1][j];//deletion
		int q3=dp[i][j-1];//insertion
		dp[i][j]=min(q1,min(q2,q3))+(a[i-1]!=b[j-1]);
	}
}

return dp[m][n];

}


int main()
{
//string a,b;
char  a[100],b[100];
cin>>a>>b;

cout<<check(a,b);
return 0;
}