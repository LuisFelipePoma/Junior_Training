#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int number;
	cin >> number;
	if (number & 1)
	{
		printf("%d is odd\n", number);
	}
	else
	{
		printf("%d is even\n", number);
	}
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
