#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int a, b, c, n;
	scanf("%d %d %d %d\n", &a, &b, &c, &n);
	if (a == 0 || b == 0 || c == 0 || (a + b + c < n) || n < 3)
		cout << "NO\n";
	else
		cout << "YES\n";
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
