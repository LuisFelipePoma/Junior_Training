#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	int n, b, d;
	scanf("%d %d %d", &n, &b, &d);

	int fruit;
	int waste = 0;
	int count = 0;
	
	for (int i = 0; i < n; i++)
	{
		cin >> fruit;
		if (fruit > b)
			continue;
		waste += fruit;
		if (waste > d)
		{
			waste = 0;
			count++;
		}
	}
	printf("%d\n", count);
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
