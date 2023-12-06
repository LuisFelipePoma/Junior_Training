#include <bits/stdc++.h>

using namespace std;
const int N = 500;

void solve()
{
	string a, b;
	while (cin >> a)
	{
		cin >> b;
		reverse(a.begin(), a.end());
		reverse(b.begin(), b.end());
		//
		int res[N] = {0};
		for (int i = 0; i < a.size(); i++)
		{
			for (int j = 0; j < b.size(); j++)
			{
				res[i + j] += (a[i] - '0') * (b[j] - '0');
			}
		}
		//
		for (int i = 0; i < N - 1; i++)
		{
			res[i + 1] += res[i] / 10;
			res[i] %= 10;
		}
		int i = N - 1;
		while (i > 0 && res[i] == 0)
			i--;
		for (; i >= 0; i--)
			cout << res[i];
		cout << endl;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	int t = 1;
	while (t--)
		solve();
	return 0;
}