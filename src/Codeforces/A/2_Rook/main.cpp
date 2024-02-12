#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	char column;
	int row;
	cin >> column >> row;
	char columns[8] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}; // array of columns
	for (int i = 0; i < 8; i++)
	{
		if (columns[i] == column)
		{
			for (int j = 1; j <= 8; j++)
			{
				if (j == row)
					continue;
				cout << columns[i] << j << '\n';
			}
		}
		else
			cout << columns[i] << row << '\n';
	}
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
