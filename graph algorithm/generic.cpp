#include<iostream>
#include<map>
#include<list>
using namespace std;
template<typename T>

class Graph{

map<T,list<T>> adjList;

public:
	Graph(){}

	void addEdge(T u,T v,bool bidir=true)
	{
		adjList[u].push_back(v);
		if(bidir)
		{
			adjList[v].push_back(u);

		}

	}

	void printadj()
	{
		for(auto i:adjList)
		{
			cout<<i.first<<"->";
			for(T entry:i.second)
			{
				cout<<entry<<",";
			}
			cout<<endl;
		}


	}

};

int main()
{
  Graph<int> g;
  g.addEdge(0,1);
  g.addEdge(0,4);
  g.addEdge(4,3);
  g.addEdge(1,4);
  g.addEdge(1,2);
  g.addEdge(2,3);
  //g.addEdge();
 g.printadj();


return 0;
}