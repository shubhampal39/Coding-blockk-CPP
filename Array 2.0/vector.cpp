#include<iostream>//header file
#include<vector>
#include<algorithm>
using namespace std;
bool compare(int a,int b)
{
 return a>b;
}

int main()
{
	vector<int> v;
	v.reserve(100);
	int n;
	cin>>n;

	for (int i = 0; i <n; ++i)
	{
		int temp;
		cin>>temp;
		v.push_back(temp);
	}

   v.pop_back();
   //v.clear();
  // v.capacity();
   
	//print these
	sort(v.begin(),v.end(),compare);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}

	return 0;	
}