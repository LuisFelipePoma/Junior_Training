#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	ll n1, n2;
	while (scanf("%lld %lld", &n1, &n2) == 2)
	{
		cout << abs(n1 - n2) << endl;
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
