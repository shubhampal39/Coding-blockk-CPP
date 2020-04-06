#include<iostream>
using namespace std;
bool isSafe(int board[][10],int i,int j,int n)
{
	for (int k = 0; k < n; ++k)
	{
		if(board[i][k]=='Q')
		{
			return false;
		}
	}
//top left
	int row=i,col=j;
	while(row>=0&&col>=0)
	{
		if(board[row][col]=='Q')
		{
			return false;
		}
		col--;
		row--;
	}
   //top right

	 row=i,col=j;
	while(row>=0&&col<j)
	{
		if(board[row][col]=='Q')
		{
			return false;
		}
		col++;
		row--;
	}

return true;

}

bool solveNQueen(int board[][10],int i,int n)
{
	if(i==n)
	{
		for (int x = 0; x < n; ++x)
		{
			for (int y= 0; y < n; ++y)
			{
				cout<<board[x][y]<<" ";
			}
		}
		return true;
	}

for (int pos = 0;pos <n; ++pos)
{
 	if(isSafe(board,i,pos,n))
 	{
 		board[i][pos]='Q';
 		bool nextrow=solveNQueen(board,n,i+1);
 		if(nextrow==true)
 		{
 			return true;
 		}
 		board[i][pos]='.';
 	}
}
 return false;
}

int main()
{


	int n;
	cin>>n;
	int board[10][10]={0};
	solveNQueen(board,0,n);
	return 0;
}
