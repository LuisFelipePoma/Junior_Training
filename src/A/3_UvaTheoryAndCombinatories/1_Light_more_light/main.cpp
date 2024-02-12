#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	ll n;
	while (cin >> n && n != 0)
	{
		// find is even or odd with bits >>
		// if (n & 1)
		// {
			// cout << "yes\n";
		// }
		// else
			// cout << "no\n";

		unsigned int sq = (int)sqrt(n);
		cout << (sq * sq == n ? "yes\n" : "no\n");
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
