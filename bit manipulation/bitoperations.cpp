#include<iostream>//header file
using namespace std;

 	bool isodd(int a)
	{
				return (a&1); 
	}
	int getbit(int a, int i)
	{
		int r=a<<i;
		int bit= (a&r)>0?1:0;
		return bit; 	
	}
    
	int clearbit(int a, int i)
	{
	 	int r=a<<i;
	 	r=~r;
	 	return r&a;
	}

	int setbit(int a, int i)
	{
		int r=a<<i;
		int bit=r|a;
		return bit;
	}

	int updatebit(int n, int i,int v)
	{
		int mask=~(1<<i);
		int clear_n=n&mask;
		n=clear_n|(v<<i);
		return n;
	}

    int clearlastbit(int n,int i)
    {
    	//-1 means all 1 in binary
    	int mask=(-1<<i);
    	return mask & n;
    }
   
   int clearrangebit(int n,int a,int b)
   {
   			int mask1=(~0)<<(a+1);
   			int mask2=~(-1<<b);
   			return mask2& mask1;


   }


int main()
{
   /*int n=5;
   int i;
   cin>>i;
   cout<<getbit(n,i);
   cout<<setbit(n,i);
   cout<<clearbit(n,i);
   int n=15;
   int i=3;
   //clear from i+1 bits
   cout<<clearlastbit(n,i);
*/
	int n=31;
	int i=1,j=3;
	cout<<clearrangebit(n,i,j);
	return 0;
}