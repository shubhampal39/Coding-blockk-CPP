#include<iostream>
#include<map>
#include<list>
using namespace std;
template<typename T>
class Graph
{
  map<T,list<T>> adjList;

public:
	Graph()
	{

	}

	void addEdge(T u,T v, bool dir=true)
	{

		adjList[u].push_back(v);
	if(dir){
		adjList[v].push_back(u);
	}		
	

  bool isCyclepresent(T node, map<T,bool> &visited,  map<T,bool> &instack)
  {
     visited[node]=true;
     instack[node]=true;
     for(T n:adjList[node])
     {
     	if(!visited[n] && isCyclepresent(n,visited,instack)|| instack[n])
    	   {
     		return true;
	     }
     }   
	instack[node]=false;
	return false;

  }

bool isCycle()
	{
		map<T,bool> visited;
		map<T,bool> instack;

		for(auto i:adjList)
		{
			T node =i.first;
			if(!visited)
			{   bool Cycle=isCyclepresent(node,visited,instack);
				if(Cycle)
				{
					return true;
				}
				
			}
		}
	}

};




int main()
{
	Graph<int > g;
	g.addEdge(0,2);
	g.addEdge(0,1);
	g.addEdge(2,3);
	g.addEdge(2,4);
	g.addEdge(3,0);
	g.addEdge(4,5);
	g.addEdge(1,5);
	if(isCycle)
	{
		cout<<"cycle presnt";
	}
	else
	{
		cout<<"cycle not presnt";
	}

	return 0;
}