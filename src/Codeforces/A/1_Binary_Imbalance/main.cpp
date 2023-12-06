#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int t;
	string chain;
	cin >> t >> chain;
	int zeros = 0;
	int ones = 0;
	bool flag = false;
	for (int i = 0; i < t - 1; i++)
	{
		chain[i] == '1' ? ones++ : zeros++;
		if (flag)
			break;
		if (chain[i] == chain[i + 1])
		{
			ones++;
		}
		else
			flag = true;
	}
	chain[t - 1] == '1' ? ones++ : zeros++;
	flag || zeros > ones ? cout << "YES\n" : cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
