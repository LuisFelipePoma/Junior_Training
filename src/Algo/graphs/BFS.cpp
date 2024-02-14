#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

// test file
// 2 3 4
// 4 5 6
// 0 4
// 0 1 7
// 0 2
// 1 6 7
// 1 5
// 3 5

// bfs
vector<int> bfs(vector<vector<int>> G, int s)
{
	int n = G.size();
	vector<bool> visited = vector<bool>(n, false);
	vector<int> path = vector<int>(n, -1);
	queue<int> queue;
	queue.push(s);

	visited[s] = true;

	while (queue.size() > 0)
	{
		int u = queue.front();
		queue.pop();
		for (auto v : G[u])
		{
			if (!visited[v])
			{
				visited[v] = true;
				path[v] = u;
				queue.push(v);
			}
		}
	}
	return path;
}

int main()
{
	vector<vector<int>> G = {
		{2, 3, 4},
		{4, 5, 6},
		{0, 4},
		{0, 1, 7},
		{0, 2},
		{1, 6, 7},
		{1, 5},
		{3, 5}};

	vector<int> path = bfs(G, 4);
	for (auto p : path)
	{
		cout << p << ", ";
	}
	return 0;
}