#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int s0, s1, r0, r1;
	while (scanf("%d %d %d %d", &s0, &s1, &r0, &r1) == 4 && s0 != 0)
	{
		bool mia1 = false, mia2 = false;

		int x = max(s0, s1) * 10 + min(s0, s1);
		int y = max(r0, r1) * 10 + min(r0, r1);
		x *= (s0 == s1 ? 8 : 1);
		y *= (r0 == r1 ? 8 : 1);

		if (x == y)
			cout << "Tie.\n";
		else if (x == 21)
			cout << "Player 1 wins.\n";
		else if (y == 21)
			cout << "Player 2 wins.\n";

		else if (x > y)
			cout << "Player 1 wins.\n";
		else if (x < y)
			cout << "Player 2 wins.\n";
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
