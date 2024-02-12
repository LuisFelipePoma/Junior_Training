#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int x, y;
	cin >> x >> y;

	if (x > 0 && y > 0) // 2 2
		cout << 1;
	else if (x > 0 && y < 0) // 2 -2
		cout << 4;
	else if (x < 0 && y < 0) // -2 -2
		cout << 3;
	else // -2 2
		cout << 2;
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
