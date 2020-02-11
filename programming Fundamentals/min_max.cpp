#include<iostream>//header file
#include<climits>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int min_no=INT_MAX;
	int max_no=INT_MIN;
    int no;
    for(int i=0;i<n;i++)
    {
    	cin>>no;
    		if(no<min_no)
    		{
    			min_no=no;
    		}

    		if(no>max_no)
    		{
    			max_no=no;
    		}	
    }
  cout<<"max:"<<min_no<<endl<<"min:"<<max_no;

	return 0;
}