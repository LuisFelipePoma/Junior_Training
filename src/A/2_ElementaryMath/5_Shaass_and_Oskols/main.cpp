#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, m;
	cin >> n;
	vector<int> wires;
	while (n--)
	{
		int birds;
		cin >> birds;
		wires.push_back(birds);
	}
	cin >> m;
	for (int i = 0; i < m; i++)
	{
		int x, y;
		cin >> x >> y;
		x--;
		int right = (wires[x] + 1) - y;
		int left = wires[x] - right;
		wires[x] = 0;
		wires[x - 1] += x - 1 < 0 ? 0 : left;
		wires[x + 1] += x + 1 >= wires.size() ? 0 : right - 1;
	}

	for (auto i : wires)
		cout << i << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin>>t;
	while (t--)
		solve();
	return 0;
}
