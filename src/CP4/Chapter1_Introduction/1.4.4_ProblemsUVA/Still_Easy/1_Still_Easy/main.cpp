#include <bits/stdc++.h>
#include <climits>
typedef long long ll;

using namespace std;

void solve()
{
	int n, m;
	cin >> n;
	vector<int> teas(n);
	for (int i = 0; i < n; i++)
	{
		cin >> teas[i];
	}
	cin >> m;
	vector<int> toppings(m);
	for (int i = 0; i < m; i++)
	{
		cin >> toppings[i];
	}
	int least_combo = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;

		while (k--)
		{
			int combo;
			cin >> combo;
			if (teas[i] + toppings[combo - 1] < least_combo)
				least_combo = teas[i] + toppings[combo - 1];
		}
	}
	int amount;
	cin >> amount;
	cout << max(0, (amount / least_combo) - 1) << endl;
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
