//https://www.geeksforgeeks.org/find-next-greater-number-set-digits/
#include<bits/stdc++.h>
using namespace std;
void next_permit(char a[],int n)
{
	int i,j;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]>a[i-1])
		{
			break;
		}
	}

	if(i==0)
	{
		cout<<"next number is not possible";
		return;
	}
    int x=a[i-1],smallest=i;

    for (int j = i+1; j<n; ++j)
    {
    	if(a[j]>x && a[j]<a[smallest])
    	{
    		smallest=j;
    	}
    }

    swap(a[smallest],a[i-1]);

    sort(a+i,a+n);

    cout<<"next number"<<a<<endl;
}


int main()
{
	char a[]="534976"; 
	int n=strlen(a);
	next_permit(a,n);

}