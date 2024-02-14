#include <bits/stdc++.h>
#include <tuple>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

vector<int> a_star(vector<vector<pair<int, int>>> G, int s, int t, vector<int> h)
{
	int n = G.size();
	vector<int> dist = vector<int>(n, INF);
	vector<bool> visited = vector<bool>(n, false);
	vector<int> f = vector<int>(n, INF);
	vector<int> path = vector<int>(n, -1);
	priority_queue<pair<int, int>> pq;

	dist[s] = 0;
	f[s] = 0;
	pq.push({f[s], s});

	while (pq.size() > 0)
	{
		int u = pq.top().second;
		pq.pop();
		if (!visited[u])
		{
			visited[u] = true;
			if (u == t)
				break;
			for (auto node : G[u])
			{
				int v = node.first, w = node.second;
				if (not visited[v] and dist[u] + w < dist[v])
				{
					path[v] = u;
					dist[v] = dist[u] + w;
					f[v] = dist[v] + h[v];
					pq.push({f[v], v});
				}
			}
		}
	}
	return path;
}

double manhattan(pair<int, int> a, pair<int, int> b)
{
	return abs(a.first - b.first) + abs(a.second - b.second);
}

pair<vector<vector<pair<int, int>>>, vector<int>> generate_graph(int size)
{
	vector<vector<pair<int, int>>> G = vector<vector<pair<int, int>>>(size * size);
	vector<int> h;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int idx = i * size + j;
			vector<tuple<int, int, int>> nbrs = {
				{make_tuple(i - 1, j - 1, 2)},
				{make_tuple(i - 1, j, 1)},
				{make_tuple(i - 1, j + 1, 2)},
				{make_tuple(i, j - 1, 1)},
				{make_tuple(i, j + 1, 1)},
				{make_tuple(i + 1, j - 1, 2)},
				{make_tuple(i + 1, j, 1)},
				{make_tuple(i + 1, j + 1, 2)}};

			for (auto node : nbrs)
			{
				int i0, j0, w;
				tie(i0, j0, w) = node;
				if (i0 < 0 or i0 >= size or j0 < 0 or j0 >= size)
					continue;
				int idx0 = i0 * size + j0;
				G[idx].push_back({idx0, w});
				h.push_back(manhattan({i, j}, {size - 1, size - 1}));
			}
		}
	}
	return {G, h};
}

int main()
{
	vector<vector<pair<int, int>>> G;
	vector<int> h;
	tie(G, h) = generate_graph(6);
	vector<int> path_star = a_star(G, 7, 35, h);
	for (int i = 0; i < path_star.size(); i++)
	{
		cout << path_star[i] << " ";
	}
}