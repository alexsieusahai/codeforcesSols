// need to learn cpp classes so I can construct a graph object and utilize it, review queues to get a better understanding, go over pointers a bit, and learn about cpp iterators

#include <iostream>
#include <vector>

using namespace std;

class Graph {
    int V;
    vector<int> adj[V];
    void addEdge(int u, int v);
    void bfs();
};

void Graph::addEdge(int u, int v)   {
    Graph.adj[u].push_back(v);
}



