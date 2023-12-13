#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int a, b, c, d, p, n;

double price(int k)
{
	return p * (sin(a * k + b) + cos(c * k + d) + 2);
}

void solve()
{
	cin >> p >> a >> b >> c >> d >> n;
	double max_ = 0, ans = 0;
	for (int i = 1; i <= n; i++)
	{
		max_ = max(max_, price(i));
		ans = max(ans, max_ - price(i));
	}
	printf("%.10f\n",ans);
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
