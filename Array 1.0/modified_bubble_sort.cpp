#include<iostream>
using namespace std;
bool comapre(int a,int b)
{
  cout<<"comapre"<<a<<" "<<b<<endl;
	return a>b;
}

void bubble_sort(int a[],int n, bool (&cmp)(int a,int b))
{

	for (int i = 1; i<n; ++i)
	{
		//int small=i;
		for (int j = 0; j < n-i-1; ++j)
		{
			if(cmp(a[j],a[j+1]))
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
bubble_sort(a,n,comapre);
for (int i = 0; i < n; ++i)
{
	cout<<a[i]<<" ";
}
}