#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	ll a, b;
	while (scanf("%lld %lld", &a, &b) == 2)
	{
		cout << abs(b - a) << endl;
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
