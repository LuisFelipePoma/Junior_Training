#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int h, w;
	while (cin >> h >> w)
	{
		if (h == 0 && w == 0)
			break;
		int curr_h, prev_h, pass;
		cin >> prev_h;
		pass = h - prev_h;
		for (int i = 1; i < w; i++)
		{
			cin >> curr_h;
			if (curr_h < prev_h)
				pass += prev_h - curr_h;
			prev_h = curr_h;
		}
		//
		cout << pass << endl;
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
