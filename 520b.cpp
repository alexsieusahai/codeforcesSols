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






