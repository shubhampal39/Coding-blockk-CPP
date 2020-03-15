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

 void dfsHelper(T node,map<T,bool> &visited)
  {
    //whenever to come to node,mark it visited
    visited[node]=true;
    cout<<node<<" ";
  
    for (T i:adjList[node])
    {
        if(!visited[i])
        {
          dfsHelper(i,visited);
        }
    }   
  }


   void dfs(T src)
   {
    map<T,bool> visited;
   int component=1;	
    dfsHelper(src,visited);
    cout<<endl;

    for(auto i:adjList)
    {
    		T city=i.first;
    		if(!visited[city])
    		{
    			dfsHelper(city,visited);
    			component++;
    		}
    }
    cout<<"component are:"<<component;
   }


};

int main()
{
Graph<string> g;
g.addEdge("Am","Ja");
g.addEdge("Am","D");
g.addEdge("D","Ja");
g.addEdge("M","Ja");
g.addEdge("M","B");
g.addEdge("D","B");
g.addEdge("M","Ba");
g.addEdge("A","D");
g.addEdge("And","N");

g.dfs("Am");
return 0;
}