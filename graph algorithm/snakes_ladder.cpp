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

 int bfs(T src,T dest)
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
      /* for (auto i:adjList)
           {
             T node=i.first;
             cout<<"dist of "<<node<<"is"<<dist[node]<<endl;
           }
*/

        T temp=dest;
        while(temp!=src)
        {
            cout<<temp<<"<--";
            temp=parent[temp];
        }
        cout<<src<<endl;


        return dist[dest];
   }


};


int main()
{
  Graph<int> g;
  int board[50]={0};
  board[2]=13;
  board[5]=2;
  board[9]=18;
  board[18]=11;
  board[17]=-13;
  board[20]=-14;
  board[24]=-8;
  board[25]=-10;
  board[32]=-2;
  board[34]=-22;
  
  for (int u = 0; u <=36; u++)
  {
    for (int i = 1; i <=6;i++)
    {
       int v=u+i+board[u+i];
       g.addEdge(u,v,false);
    }
    /* code */
  }


int a=g.bfs(0,36);
cout<<"The Shortest Distance is " <<a;

return 0;
}