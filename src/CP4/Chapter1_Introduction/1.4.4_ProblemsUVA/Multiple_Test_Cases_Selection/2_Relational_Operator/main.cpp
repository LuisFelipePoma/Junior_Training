#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;

	if (a < b)
		cout << "<\n";
	else if (a > b)
		cout << ">\n";
	else
		cout << "=\n";
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
