#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int c = 0;
void solve()
{
	int n, high = 0, low = 0, mario;
	cin >> n;
	cin >> mario;
	for (int i = 1; i < n; i++)
	{
		int actual = -1;
		cin >> actual;
		if (mario > actual)
			low++;
		else if (mario < actual)
			high++;
		mario = actual;
	}
	printf("Case %d: %d %d\n", ++c, high, low);
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
