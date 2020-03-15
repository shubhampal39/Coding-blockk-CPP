//single source shortest path using bfs
#include<iostream>
#include<map>
#include<list>
#include<queue>
#include<bits/stdc++.h>
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

 void bfs(T src)
     {
 		queue<T> q;
 		map<T,int> dist;
    map<T,T> parent;

    for(auto i:adjList)
    {
      dist[i.first]=INT_MAX;
    }  

 		q.push(src);
 		dist[src]=0;
    parent[src]=src;


 		while(!q.empty())
 		{
           T node=q.front();
         
        //   cout<<node<<" ";
         
           q.pop();

           for(auto i:adjList[node])
           {
           	if(dist[i]==INT_MAX)
           	{
           		q.push(i);
           		dist[i]=dist[node]+1;
              parent[i]=node;
           	}
           }

           
 		}
    for (auto i:adjList)
           {
             T node=i.first;
             cout<<"dist of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
           }

   }


};

int main()
{
  Graph<int> g;
  //Graph<string> g1; for string
  g.addEdge(0,1);
  g.addEdge(0,4);
  g.addEdge(3,5);
  g.addEdge(3,4);
  g.addEdge(1,2);
  g.addEdge(2,3);
  g.addEdge(2,4);
 // g.printadj();
  g.bfs(0);
  return 0;
}