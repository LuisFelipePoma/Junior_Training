#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> pos(n, {1});
	for (int i = 2; i <= n; i++)
	{
		int x;
		cin >> x;
		pos[1 + x] = i;
	}
	for (int num : pos)
	{
		cout << num << " ";
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
