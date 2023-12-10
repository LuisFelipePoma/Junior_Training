#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	double q, y;
	cin >> n;
	double ans = 0;
	while (n--)
	{
		cin >> q >> y;
		ans += q * y;
	}
	cout << ans << endl;
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
