#include<iostream>//header file
using namespace std;

int main()
{
int n;
cin>>n;
int row=1;
while(row<=n)
{ 		
			if(row%2!=0)
			{	int i=row;
				while(i--)
			    {
			  		cout<<1;  	
			    }
			  
			}
				else
				{
					int i=1;
					cout<<1;
						while(i<=row-2)
				    {
				    	cout<<0;
				    	i++;	
				   	}
				  		  	
				      cout<<1<<"\t";
				}

				cout<<"\n";
				row++;
    	}



	return 0;
}