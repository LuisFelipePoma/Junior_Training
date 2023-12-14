#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, initialPos = 1, posKing = 1;
	bool found = false;
	cin >> n;
	cin >> initialPos;
	for (int i = initialPos + 1; i < n + initialPos; i++)
	{
		posKing++;
		int x;
		cin >> x;
		if (x != i && !found)
		{
			cout << posKing << endl;
			found = true;
		}
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
