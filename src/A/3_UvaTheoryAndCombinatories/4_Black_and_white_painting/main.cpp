#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, m, c;
	while (cin >> n >> m >> c && n != 0)
	{
		cout << ((n - 7) * (m - 7) + c) / 2 << "\n";
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
