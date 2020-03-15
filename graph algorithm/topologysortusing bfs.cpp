#include<iostream>
#include<map>
#include<list>
#include<queue>
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

 void topologicalsort()
 	{
 		queue<T> q;
 		map<T,bool> visited;
 		map<T,int> indegree;
 		for(auto i:adjList)
 		{
 			T node=i.first;
 			visited[node]=false;
 			indegree[node]=0;
 		}

 		for(auto i:adjList)
 		{
 			T u=i.first;
 			for (T v:adjList[u])
 			{
 				indegree[v]++;
 			}

 		}
 	}

};

int main()
{


return 0;
}