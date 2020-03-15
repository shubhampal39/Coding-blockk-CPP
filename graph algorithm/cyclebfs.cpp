#include<iostream>
#include<bits/stdc++.h>
#include<map>
using namespace std;
template <typename T>

class Graph
{
	map<T,list<T>> adjList;

public:
	Graph()
	{

	}

	void addEdge(T u,T v,bool bidir=true)
	{
		adjList[u].push_back(v);
		if(bidir)
		{
			adjList[v].push_back(u);
		}
	}
   //undirected graph
bool isCyclicBFS(T src)
{   
	map<T,bool> visited;
	map<T,int> parent;
	queue<T> q;

	q.push(src);
	visited[src]=true;
	parent[src]=src;
	 
	 	while(!q.empty())
		{
			T node=q.front();
			q.pop();
			for(T neighbour:adjList[node])
			{
						if(visited[neighbour]==true && parent[node]!=neighbour)
						{
							return true;
						}
						else if(!visited[neighbour])
						{
							visited[neighbour]=true;
							parent[neighbour]=node;
							q.push(neighbour);
						}
					
			}

		}

	return false;
	}


};

int main()
{

	Graph<int> g;
	g.addEdge(1,2);
	g.addEdge(1,4);
	//SSg.addEdge(1,3);
	g.addEdge(1,3);
		
	if(g.isCyclicBFS(1))
	{
		cout<<"cyclic Graph";
	}
	else
	{
		cout<<"Non cyclic!";
	}

return 0;
}