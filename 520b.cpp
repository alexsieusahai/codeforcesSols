<<<<<<< HEAD
#include <iostream>
#include <list>

using namespace std;

int main()	{
	int n,m;
	cin >> n >> m; 
	// n is starting position, m is desired
	list<int> queue;
	queue.push_back(n);
	bool visited[2*10000];
	int depth[2*10000];
	for (int i = 0; i < 2*10000; ++i)	{
		visited[i] = false;
		depth[i] = 0;
	}
	visited[n] = true;
	while (queue.front() != m)	{
		int currentNum = queue.front();
		queue.pop_front();
		//cout << currentNode.val << endl;
		if (currentNum > 0)	{
			depth[currentNum-1] = depth[currentNum] + 1;
			if (!visited[currentNum-1])	{
				visited[currentNum-1] = true;
				queue.push_back(currentNum-1);
			}
		}
		if (!visited[currentNum * 2] && currentNum <= m)	{
			visited[currentNum * 2] = true;
			depth[currentNum * 2] = depth[currentNum] + 1;
			queue.push_back(currentNum * 2);
		}
	}
	cout << depth[queue.front()];
	return 0;
}



=======
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
>>>>>>> 8f36d2a0498aba25645ed82b853435f516dda3aa



