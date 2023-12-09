#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	double n;
	cin >> n;
	cout << int(round((1000.0 * n) * (5280.0 / 4854.0))) << endl;
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
