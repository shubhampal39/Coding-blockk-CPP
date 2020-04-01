#include<iostream>
using namespace std;
void selection_sort(int a[],int n)
{

	for (int i = 0; i < n-1; ++i)
	{
		int small=i;
		for (int j = i+1; j < n; ++j)
		{
			if(a[small]>a[j])
			{
				small=j;
			}
		}
		swap(a[small],a[i]);
	}

}
int main()
{
int a[]={5,4,3,2,1,10,99,44,33,100};
int n=10;
selection_sort(a,n);
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}
}