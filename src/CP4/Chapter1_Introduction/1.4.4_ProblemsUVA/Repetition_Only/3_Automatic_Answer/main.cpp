#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	cin >> n;
	n = (((n * 567 / 9) + 7492) * 235 / 47) - 498;
	cout << abs((n / 10) % 10) << endl;
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
