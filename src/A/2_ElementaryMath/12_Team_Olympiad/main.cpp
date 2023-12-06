#include <algorithm>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<vector<int>> teams(4, vector<int>(n + 1, -1));
	vector<int> count(4, 0);
	for (int pos = 1; pos <= n; pos++)
	{
		int id;
		cin >> id;
		count[id]++;
		teams[id][count[id]] = pos;
	}
	//
	int n_teams = min({count[1], count[2], count[3]});
	cout << n_teams << "\n";
	for (int i = 1; i <= n_teams; i++)
	{
		cout << teams[1][i] << " " << teams[2][i] << " " << teams[3][i] << "\n";
	}
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
