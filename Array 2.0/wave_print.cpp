#include<iostream>
using namespace std;

int main()
{
	int m,n;
	cin>>m>>n;

	int a[m][n]={0};

	
	for (int i = 0; i < m; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			cin>>a[i][j];
		}
	}

	for (int col = 0; col < n; col++)
	{
		if(col%2==0)
		{
			for (int row = 0; row < m; row++)
			{
					cout<<a[row][col]<<" ";
			}
		}
		else
		{
			for (int row = m-1;row>=0;row--)
			{
				cout<<a[row][col]<<" ";
			}

		}
	}

	return 0;
}
