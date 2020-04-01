#include<iostream>
using namespace std;
bool isprime(int n)
{  
	for (int i =2;i<n-1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}

	return true;
}
//print all prime till range

void print_prime(int n)
{
	for (int i = 2; i < n; ++i)
	{
		if(isprime(i))
		{
			cout<<i<<" ";
		}
	}
}


int main()
{
	int n;
	cin>>n;
	print_prime(n);
	return 0;
}