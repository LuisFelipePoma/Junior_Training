#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int s, r1, r2;
	cin >> r1 >> s;
	r2 = s * 2 - r1;
	cout << r2 << endl;
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
