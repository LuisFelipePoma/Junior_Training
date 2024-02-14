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

function<void(int)> _dfs;

// dfs
vector<int> dfs(vector<vector<int>> G, int s)
{
	int n = G.size();
	vector<bool> visited = vector<bool>(n, false);
	vector<int> parent = vector<int>(n, -1);

	_dfs = [&](int u)
	{
		visited[u] = true;
		for (auto v : G[u])
		{
			if (!visited[v])
			{
				parent[v] = u;
				_dfs(v);
			}
		}
	};
	_dfs(s);
	return parent;
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

	vector<int> parent = dfs(G, 4);
	for (auto p : parent)
	{
		cout << p << ", ";
	}
	return 0;
}