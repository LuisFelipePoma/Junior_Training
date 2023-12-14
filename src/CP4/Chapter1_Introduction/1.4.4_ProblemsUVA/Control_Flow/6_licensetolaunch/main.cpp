#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, day = 0, junk = 1e9 + 1;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int x;
		cin >> x;
		if (x < junk)
		{
			day = i;
			junk = x;
		}
	}
	cout << day << endl;
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
