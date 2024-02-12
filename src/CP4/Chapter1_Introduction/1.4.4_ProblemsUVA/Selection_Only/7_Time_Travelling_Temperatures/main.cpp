#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	double x, y;
	cin >> x >> y;

	if (x == 0 && y == 1)
		cout << "ALL GOOD\n";
	else if (y == 1 && x != 0)
		cout << "IMPOSSIBLE\n";
	else
		printf("%f\n", (double)1.0 * x / (1.0 - y));
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
