#include <bits/stdc++.h>
using namespace std;

void solve()
{
	int a, b, x;
	while (cin >> a >> b)
	{
		set<int> a_set, b_set;
		int rep = 0;
		if (a == 0 && b == 0)
			break;

		for (int i = 0; i < a; i++)
		{
			cin >> x;
			a_set.insert(x);
		}
		for (int i = 0; i < b; i++)
		{
			cin >> x;
			if (a_set.find(x) != a_set.end() && b_set.find(x) == b_set.end())
				rep++;
			b_set.insert(x);
		}
		if (a_set.size() == 1 && b_set.size() == 1)
			rep = 1;
		cout << min(a_set.size(), b_set.size()) - rep << endl;
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