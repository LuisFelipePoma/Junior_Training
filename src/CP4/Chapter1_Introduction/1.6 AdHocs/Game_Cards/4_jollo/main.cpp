#include <bits/stdc++.h>

using namespace std;

vector<bool> taken;

int find_right(int k)
{
	for (int i = k + 1; i <= 52; i++)
		if (!taken[i])
			return i;
	return -1;
}
int lowest_card(int a,int b,int c,int d,int e)
{
	if ((d < b) && (e < c))
		return -1;
	if ((d < b) && (c < e))
		return find_right(c);
	if (d > c)
		return find_right(0);
	return find_right(b);
}
void solve()
{
	int a, b, c, d, e;
	while (cin >> a >> b >> c >> d >> e && a)
	{
		taken = vector<bool>(53, false);

		taken[a] = true;
		taken[b] = true;
		taken[c] = true;
		taken[d] = true;
		taken[e] = true;

		if (a > b) swap(a,b);
		if (b > c) swap(b,c);
		if (a > b) swap(a,b);
		if (d > e) swap(d,e);

		cout << lowest_card(a, b, c, d, e) << endl;
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