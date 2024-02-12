#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int a, i;
	cin >> a >> i;
	i--;
	cout << a * i + 1 << endl;
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
