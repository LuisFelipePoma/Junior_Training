#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	int g, s, c;
	cin >> g >> s >> c;
	g *= 3;
	s *= 2;
	c *= 1;
	g += s + c;
	if (g / 8 >= 1)
		printf("Province or ");
	else if (g / 5 >= 1)
		printf("Duchy or ");
	else if (g / 2 >= 1)
		printf("Estate or ");

	if (g / 6 >= 1)
		printf("Gold");
	else if (g / 3 >= 1)
		printf("Silver");
	else
		printf("Copper");
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
