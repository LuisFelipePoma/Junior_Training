#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int b, n;
	cin >> b >> n;
	while (b)
	{
		if (b == 0 && n == 0)
			break;
		vector<int> reserves(b);
		for (int i = 0; i < b; i++)
		{
			cin >> reserves[i];
		}
		while (n--)
		{
			int d, c, v;
			cin >> d >> c >> v;
			reserves[c - 1] += v;
			reserves[d - 1] -= v;
		}
		bool noChance = false;
		for (int i = 0; i < reserves.size(); i++)
		{
			auto a = reserves[i];
			if (a < 0)
			{
				noChance = true;
				break;
			}
		}
		noChance ? cout << "N\n" : cout << "S\n";
		cin >> b >> n;
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
