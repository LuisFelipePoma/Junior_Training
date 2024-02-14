#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

typedef pair<int, int> ii;
int d[maxn];
vector<pair<int, int>> adj[maxn];

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < m; i++)
	{
		int a, b, w;
		cin >> a >> b >> w;
		a--;
		b--;

		adj[a].push_back({b, w});
		adj[b].push_back({a, w});
	}

	for (int i = 0; i < n; i++)
		d[i] = INF;

	int s = 0;
	d[s] = 0;

	priority_queue<ii, vector<ii>, greater<ii>> pq;
	pq.push({d[s], s});

	// O(mlogn);
	while (!pq.empty())
	{
		auto a = pq.top();
		pq.pop();

		// MINIMA DISTANCIA
		int d_v = a.first, v = a.second;

		if (d[v] != d_v)
			continue;

		cout << d_v << " " << v << endl;

		// ACTUALIZIMOS SUS VECINOS
		for (auto e : adj[v])
		{
			int to = e.first, w = e.second;

			if (d_v + w < d[to])
			{
				d[to] = d_v + w;
				pq.push({d[to], to});
			}
		}
	}

	return 0;
}
