#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int c = 0;
void solve()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			continue;
		int zeros = 0, reasons = 0;
		while (n--)
		{
			int treat;
			cin >> treat;
			treat == 0 ? zeros++ : reasons++;
		}
		printf("Case %d: %d\n", ++c, reasons - zeros);
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
