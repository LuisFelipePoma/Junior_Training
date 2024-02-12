#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
char chars[5][41];
void solve()
{
	int n;
	cin >> n;
	string ans = "";
	for (int i = 0; i < 5; i++)
	{
		cin >> chars[i];
	}
	//
	for (int i = 0; i < (4 * n) - 3; i += 4)
	{
		if (
			chars[0][i] == '.' &&
			chars[0][i + 1] == '*' &&
			chars[0][i + 2] == '.')
			ans += "1";
		else if (
			chars[3][i] == '*')
			ans += "2";
		else if (chars[3][i + 2] == '*')
			ans += "3";
	}
	cout << ans << endl;
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
