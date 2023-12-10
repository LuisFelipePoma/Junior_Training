#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int x, n;
	cin >> x >> n;
	ll ans = 0;
	while (n--)
	{
		int p;
		cin >> p;
		ans += x - p;
	}
	cout << ans + x << endl;
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
