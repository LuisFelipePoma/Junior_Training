#include <bits/stdc++.h>
#include <cmath>
typedef long long ll;

using namespace std;
int c = 0;
void solve()
{
	int n, mile = 0, juice = 0;
	cin >> n;

	while (n--)
	{
		int call;
		cin >> call;
		mile += 10 + floor(call / 30) * 10;
		juice += 15 + floor(call / 60) * 15;
	}
	int ans = min(mile, juice);
	if (mile == juice)
		printf("Case %d: %s %d\n", ++c, "Mile Juice", ans);
	else if (mile > juice)
		printf("Case %d: %s %d\n", ++c, "Juice", ans);
	else
		printf("Case %d: %s %d\n", ++c, "Mile", ans);
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
