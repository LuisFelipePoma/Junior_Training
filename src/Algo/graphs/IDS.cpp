#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

// Function with IO
vector<vector<int>> read_graph(const char *filename)
{
	vector<vector<int>> G;
	ifstream file(filename);
	string line;
	while (getline(file, line))
	{
		istringstream iss(line);
		vector<int> row;
		int a;
		while (iss >> a)
		{
			if (a == '-')
				row.push_back({});
			else
				row.push_back(a);
		}
		G.push_back(row);
	}
	file.close();
	return G;
}

// Algorithm DLS (version for IDS)
// Depth Limited Search
vector<int> dls_without_weights(vector<vector<int>> G, int s, int limit)
{
	int n = G.size();
	vector<bool> visited = vector<bool>(n, false);
	vector<int> path = vector<int>(n, -1);

	function<void(int, int)> _dls = [&](int u, int limit)
	{
		if (limit > 0 and !visited[u])
		{
			visited[u] = true;
			for (int v : G[u])
			{
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

// Algorithm IDS
// Iterative Deepening Search
// Is a state space/graph search strategy in which a depth-limited search is run repeatedly with increasing depth limits until the goal is found
vector<int> ids(vector<vector<int>> G, int start, int target)
{
	int n = G.size();
	vector<int> path;
	for (int limit = 0; limit < n; limit++)
	{
		path = dls_without_weights(G, start, limit);
		if (path[target] != -1)
		{
			break;
		}
	}
	return path;
}

int main()
{
	vector<vector<int>> G;
	G = read_graph("input2.txt");

	// Run algorithm ids
	vector<int> path = ids(G, 12, 7);
	// Print result
	for (int i = 0; i < path.size(); i++)
	{
		cout << path[i] << " ";
	}
	return 0;
}