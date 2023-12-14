#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int allowed = 0;
void solve()
{
	double h, w, d, weight;
	cin >> h >> w >> d >> weight;
	if (h + w + d <= 125 && weight <= 7.000000)
	{
		allowed++;
		cout << 1 << endl;
		return;
	}
	cout << 0 << endl;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	cout << allowed << endl;
	return 0;
}
