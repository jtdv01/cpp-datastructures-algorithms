#include <iostream>
#include <vector>
#include "graph.h"
#include "mst.h"
using namespace std;

int main(){
    vector<Edge> edges = {
        { 0, 1 }, { 1, 2 }, { 2, 0 }, { 2, 1 },
        { 3, 2 }, { 4, 5 }, { 5, 4 }
    };

    int N = edges.size();

    Graph g = Graph(edges, N);
    g.printGraph();

    MST::primsAlgorithm(g);
}