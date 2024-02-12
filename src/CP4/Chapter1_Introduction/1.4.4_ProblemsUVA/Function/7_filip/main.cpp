#include <algorithm>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	cout << (stoi(a) < stoi(b) ? b : a) << endl;
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
