#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Graph
{
    public:
    vector<vector<bool>> adjmatrix;
    int vertices;
    
    //constructor
    Graph(int vertices)
    {
        this->vertices = vertices;
        adjmatrix.resize(vertices,vector<bool>(vertices));
        for(int i=0;i<adjmatrix[i].size();i++)
        {
            for(int j = 0;j<vertices;j++)
            {
                adjmatrix[i][j]=false;
            }
        }
        
    }
    
    //Adding edges
    void addEdge(int i , int j)
    {
        adjmatrix[i][j]=true;
        adjmatrix[j][i]=true;//undirected graph
    }
    
    //removing edges
    void removeEdge(int i , int j)
    {
        adjmatrix[i][j]=false;
        adjmatrix[j][i]=false;//undirected graph
    }
    
    //print
    void print() {
    for (int i = 0; i < vertices; i++) {
      cout << i << " : ";
      for (int j = 0; j < vertices; j++)
        cout << adjmatrix[i][j] << " ";
      cout << "\n";
    }
  }
    
    
    
};

int main()
{
   Graph g(4);
   g.addEdge(0, 1);
  g.addEdge(0, 2);
  g.addEdge(1, 2);
  g.addEdge(2, 0);
  g.addEdge(0, 3);
  
  g.print();


    return 0;
}
