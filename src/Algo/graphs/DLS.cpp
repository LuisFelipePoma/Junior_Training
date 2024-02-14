#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

// Function with IO
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

// Algorithm DLS
// Depth Limited Search 
// Is a graph search algorithm that finds a path from the root of the tree to a goal node
vector<int> dls(vector<vector<pair<int, int>>> G, int s, int limit)
{
	int n = G.size();
	vector<bool> visited = vector<bool>(n, false);
	vector<int> path = vector<int>(n, -1);

	function<void(int, int)> _dls = [&](int u, int limit)
	{
		if (limit > 0)
		{
			visited[u] = true;
			for (auto node : G[u])
			{
				int v = node.first, w = node.second;
				if (!visited[v])
				{
					path[v] = u;
					_dls(v, limit - 1);
				}
			}
		}
	};

	_dls(s, limit);
	return path;
}

int main()
{
	vector<vector<pair<int, int>>> G;
	G = read_weight_graph("input.txt");
	// Run algorithm dls
	vector<int> path = dls(G, 1, 4);
	// Print result
	for (int i = 0; i < path.size(); i++)
	{
		cout << path[i] << " ";
	}

	return 0;
}

