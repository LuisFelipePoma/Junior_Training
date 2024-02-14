#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const int MAX = 1e5 + 10;

int dp[MAX], a[MAX];

void solve()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	dp[2] = abs(a[1] - a[0]);
	for (int i = 3; i <= n; i++)
	{
		dp[i] = min(dp[i - 1] + abs(a[i] - a[i - 1]), dp[i - 2] + abs(a[i] - a[i - 2]));
	}
	cout << dp[n] << endl;
}

int DP(int i)
{
	if (i == 1) return 0;
	if (i == 2) return abs(a[1] - a[0]);
	if (dp[i] != -1) return dp[i];
	return dp[i] = min(DP(i - 1) + abs(a[i] - a[i - 1]), DP(i - 2) + abs(a[i] - a[i - 2]));
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
