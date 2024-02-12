#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, t, k, d;
	scanf("%d %d %d %d", &n, &t, &k, &d);

	int total = (t + d) / t;
	if (k * total < n)
		cout << "YES";
	else
		cout << "NO";
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
