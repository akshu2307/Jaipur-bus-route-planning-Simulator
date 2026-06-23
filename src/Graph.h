#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
using namespace std;

class Graph
{
public:
    int V;
    vector<pair<int,int>> *adj;

    Graph(int vertices);
    void addEdge(int u,int v,int weight);
};

#endif
