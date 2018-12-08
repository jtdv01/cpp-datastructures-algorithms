#include <iostream>
#include <vector>

using namespace std;
struct Edge
{
    int src, dest;
};

class Graph
{
    public:
        vector<vector <int> > adjList;

        // Pass by reference &edges
        Graph(vector<Edge> const &edges, int N)
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
};

void printGraph(Graph const& graph, int N)
{
    for (int i = 0; i < N; i++)
    {
        // print current vertex number
        cout << i << " --> ";
 
        // print all neighboring vertices of vertex i
        for (int v : graph.adjList[i])
            cout << v << " ";
        cout << endl;
    }
}

int main(){
    vector<Edge> edges = {
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }
    };

    int N = edges.size();

    Graph g = Graph(edges, N);

    printGraph(g, N);
}