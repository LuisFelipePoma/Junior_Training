#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	int v, t;
	while (scanf("%d %d", &v, &t) == 2)
	{
		if ((v >= -100 && v <= 100) & (t >= 0 && t <= 200))
			printf("%d\n", v * t * 2);
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
