#include<iostream>
#include<cstring>
using namespace std;
template<typename T>

class node{
	string key;
	T value;
	node <T> *next;


	node(string key,T,v)
	{
		this->key=key;
		value=v;

	}

}

class HashTable{
   int cs;//current size
   int ts;//table size
   node<T>*
  node<T> ** buckets;
public:
	HashTable(int ds=7){
		cs=0;
		ts=ds;
		buckets=new node<T>*[ts];
		//make all addresss as null

		for (int i = 0; i < ts; ++i)
		{
			buckets[i]=NULL;
		}
	}
    int hashfn(string key)
    {
    	int L=key.length();
    	int ans=0;
    	int p=1;

    	for(int i=0;i<L;i++)
    	{
    		ans+=key[L-i-1]*p;
    		p=p*37;

    		p%=ts;
    		ans%=ts;
    		return ans;
    	}

    }

	void insert(string key,T value)
	{
		int i=hashfn(key);

		node<T>*n=new node<T>(key,value);
		n->next=bucket[i];
		buckets[i]=n;
	}
	void print()
	{

		for(int i=0;i<ts;i++)
		{
			node<T> *temp=buckets[i];
			cout<<"Bucket "<<i<<"->";
			while(temp!=NULL)
			{
				cout<<temp->key<<",";
				temp=temp->next;
			}
			cout<<endl;
		}

	}





}


int main()
{




	return 0;
}