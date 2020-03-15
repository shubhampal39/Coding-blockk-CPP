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
    dfsHelper(src,visited);
   }
          void dfshelper( T node ,map<T,bool> &visited,list<T> &ordering)
          {
              visited[node]=true;
              for(T i:adjList[node])
              {
                if(!visited[i])
                {
                  dfshelper(i,visited,ordering);
                }
              }
              ordering.push_front(node);

          }

 void dfstopology()
 {

  map<T,bool> visited;
  list<T> ordering;

  for(auto i:adjList)
  {
    T node =i.first;
    if(!visited[node])
    {
      dfshelper(node,visited,ordering);
    }
  }

  for(T element:ordering)
     cout<<element<<"-->";

 }


};

int main()
{

Graph <int>g; 
    g.addEdge(5, 2); 
    g.addEdge(5, 0); 
    g.addEdge(4, 0); 
    g.addEdge(4, 1); 
    g.addEdge(2, 3); 
    g.addEdge(3, 1); 

 
  
g.dfstopology();
 
 // g.printadj();
 
//  g.dfs(0);

return 0;
}