#include <iostream>
#include <vector>
#include "graph.h"
using namespace std;


// Pass by reference &edges
Graph::Graph(vector<Edge> const &edges, int N)
{
    adjList.resize(N);

    for(auto &edge: edges)
    {
        // Append an extra 
        // adjList[edge.src].push_back(edge.dest);
        
        // alternate way, use a pointer
        auto srcList = &adjList[edge.src];
        srcList->push_back(edge.dest);
    }
}

void Graph::printGraph()
{
    int N = adjList.size();
    for (int i = 0; i < N; i++)
    {
        // print current vertex number
        cout << i << " --> ";
 
        // print all neighboring vertices of vertex i
        for (int v : adjList[i])
            cout << v << " ";
        cout << endl;
    }
}

