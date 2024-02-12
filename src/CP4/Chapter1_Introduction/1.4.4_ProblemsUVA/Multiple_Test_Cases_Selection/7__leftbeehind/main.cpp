#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int a, b, n = 15;
	while (n--)
	{
		cin >> a >> b;
		if (a + b == 13)
			cout << "Never speak again.\n";
		else if (a > b)
			cout << "To the convention.\n";
		else if (a < b)
			cout << "Left beehind.\n";
		else if (a == b && a != 0 && b != 0)
			cout << "Undecided.\n";
		else if (a == 0 && b == 0)
			break;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
