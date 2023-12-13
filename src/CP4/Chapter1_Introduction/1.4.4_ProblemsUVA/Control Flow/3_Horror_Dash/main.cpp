#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int c = 0;
void solve()
{
	int n, max_speed = -1;
	cin >> n;
	while (n--)
	{
		int creature;
		cin >> creature;
		max_speed = creature > max_speed ? creature : max_speed;
	}
	printf("Case %d: %d\n", ++c, max_speed);
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
