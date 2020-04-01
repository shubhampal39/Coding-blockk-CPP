#include<iostream>
#include<vector>
using namespace std;
void upheapify(vector<int> &heap,int idx)
{

		if(idx==0)
		{
			return;
		}

		int parentidx=(idx-1)/2;
		if(heap[parentidx]<heap[idx])
		{
			int temp=heap[parentidx];
			heap[parentidx]=heap[idx];
			heap[idx]=temp;
			upheapify(heap,parentidx);

		}
		else
		{
			return;
		}

}


void insert(vector<int> &heap,int key)
{
	heap.push_back(key);
	upheapify(heap,heap.size()-1);
}

void display(vector<int> &heap)
{
	for (int i = 0; i < heap.size(); ++i)
	{
		cout<<heap[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int n,a;
	cin>>n;
   vector<int> heap;
   for (int i = 0; i < n; ++i)
   {
   	cin>>a;
   	insert(heap,a);
   }
   display(heap);

	return 0;
}