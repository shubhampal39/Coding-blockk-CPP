#include<iostream>
using namespace std;
void bubble_sort(int a[],int n)
{

	for (int i = 1; i<n; ++i)
	{
		//int small=i;
		for (int j = 0; j < n-i-1; ++j)
		{
			if(a[j]>a[j+1])
			{
			swap(a[j],a[j+1]);
			}
		}
	}

}
int main()
{
int a[]={5,4,3,2,1,10,99,44,33,100};
int n=10;
bubble_sort(a,n);
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}
}