#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int match(int n, int i, int j)
{
	int ans = 0;
	for (int k = 0; k < n; k++)
	{
		i = (i + 1) / 2;
		j = (j + 1) / 2;
		ans = k + 1;
		if (i == j)
			break;
	}
	return ans;
}

void solve()
{
	int n, i, j;
	while (cin >> n >> i >> j)
	{
		int ans = match(n, i, j);
		cout << ans << endl;
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
