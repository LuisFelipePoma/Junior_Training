#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	ll n, x, cs = 0;
	scanf("%lld %lld\n", &n, &x);

	while (n--)
	{
		char op;
		ll amount;
		scanf("%c %lld\n", &op, &amount);

		switch (op)
		{
		case '-':
			if (x - amount < 0)
			{
				cs++;
				break;
			}
			x -= amount;
			break;
		case '+':
			x += amount;
			break;
		}
	}
	printf("%lld %lld\n", x, cs);
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
