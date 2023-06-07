
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Graph
{
    public:
    unordered_map<int,list<int>> adjList;
    // directed=1 directed Graph
    // directed = 0 Undirected Graph
    
    //adding edges
    void addEdge(int u , int v , bool directed)
    {
        adjList[u].push_back(v);
        if(directed==0)
        {
             adjList[v].push_back(u);
        }
        
    }
    
    //removing edges
     void deleteEdge(int u, int v, bool directed)
    {
        adjList[u].remove(v);
        if (directed == 0)
        {
            adjList[v].remove(u);
        }
    }
    
    void print()
    {
        for(auto i:adjList)
        {
            cout<<i.first<<"->";
            for(auto j:i.second)
            {
                cout<<j<<",";
            }
            cout<<"\n";
        }
    }
    
    
};



int main()
{
    Graph g;
    
    cout<<"for Undirected Graph:\n";
      g.addEdge(0, 1,0);
  g.addEdge(2, 3,0);
  g.addEdge(1, 2,0);
  g.addEdge(3, 1,0);
  g.addEdge(3, 4,0);
  g.addEdge(0, 4,0);
  g.print();
  cout<<"After deleting\n";
  g.deleteEdge(0,4,0);
  
  g.print();

    return 0;
}
