#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

pair<vector<int>, vector<int>> dijkstra(vector<vector<pair<int, int>>> G, int s)
{
	int n = G.size();
	vector<bool> visited = vector<bool>(n, false);
	vector<int> path = vector<int>(n, -1);
	vector<int> cost = vector<int>(n, INF);
	cost[s] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push({0, s});

	while (!pq.empty())
	{
		int u = pq.top().second;
		pq.pop();
		visited[u] = true;
		for (auto node : G[u])
		{
			int v = node.first, w = node.second;
			int new_cost = cost[u] + w;
			if (!visited[v] && new_cost < cost[v])
			{
				cost[v] = new_cost;
				path[v] = u;
				pq.push({new_cost, v});
			}
		}
	}
	return {path, cost};
}

// file
// 1 7 2 2 3 4 4 6
// 0 7 2 4 3 4 5 3 6 2
// 0 2 1 4
// 0 4 1 4 5 9 7 3
// 0 6 6 9 7 9
// 1 3 3 9 6 8 7 4
// 1 2 4 9 5 8
// 3 3 4 9 5 4

int main()
{
	// read the input
	vector<vector<pair<int, int>>> G;
	G = read_weight_graph("input.txt");

	// run the algorithm
	auto result = dijkstra(G, 7);

	// print the result
	for (int i = 0; i < result.first.size(); i++)
	{
		cout << "path to " << i << ": " << result.first[i] << endl;
	}
	cout << endl;
	for (int i = 0; i < result.second.size(); i++)
	{
		cout << "cost to " << i << ": " << result.second[i] << endl;
	}
	return 0;
}

// Functions IO
vector<vector<pair<int, int>>> read_weight_graph(const char *filename)
{
	vector<vector<pair<int, int>>> G;
	ifstream file(filename);
	string line;
	while (getline(file, line))
	{
		istringstream iss(line);
		vector<pair<int, int>> row;
		int a, b;
		while (iss >> a >> b)
		{
			row.push_back({a, b});
		}
		G.push_back(row);
	}
	file.close();
	return G;
}