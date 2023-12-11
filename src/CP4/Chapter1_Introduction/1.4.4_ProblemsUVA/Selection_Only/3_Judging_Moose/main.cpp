#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;
	if (a + b == 0)
		cout << "Not a moose\n";
	else
	{
		if (a == b)
			printf("Even %d\n", a + b);
		else
			printf("Odd %d\n", max(a, b) * 2);
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
