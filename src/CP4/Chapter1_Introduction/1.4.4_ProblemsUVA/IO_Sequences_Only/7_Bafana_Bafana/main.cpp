#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int t, c = 0;
	scanf("%d/n", &t);
	while (t--)
	{
		int n, k, p, ans;
		scanf("%d %d %d", &n, &k, &p);
		ans = ((k + p) % n) == 0 ? n : (k + p) % n;
		printf("Case %d: %d\n", ++c, ans);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
