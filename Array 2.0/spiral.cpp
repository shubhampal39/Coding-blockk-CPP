#include<iostream>
using namespace std;
void spiral(int a[][1000],int m,int n)
{

		int startCol=0,startRow=0;
		int endRow=m-1;
		int endCol=n-1;

		while(startRow<=endRow and startCol<=endCol)
		{
			for (int i = startCol; i <= endCol;i++)	
			{
				cout<<a[startRow][i]<<" ";

			}
			startRow++;
			for (int i = startRow; i <= endRow; i++)
			{
				cout<<a[i][endCol]<<" ";
			}
			for (int i = endCol; i>=startCol;i--)
			{
				cout<<a[endRow][i]<<" ";
			}
			for (int i = endRow; i>=startRow ; i--)
			{
				cout<<a[startCol][i]<<" ";
			}
			startCol++;
		}

}


int main()
{
		int m,n;
		cin>>m>>n;

		int a[1000][1000]={0};

		
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				cin>>a[i][j];
			}
		}

	  spiral(a,m,n);
	  return 0;

}
