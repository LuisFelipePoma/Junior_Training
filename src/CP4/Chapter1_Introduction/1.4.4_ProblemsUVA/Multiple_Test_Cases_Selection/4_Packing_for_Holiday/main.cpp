#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int c = 0;
void solve()
{
	int l, w, h;
	scanf("%d %d %d", &l, &w, &h);
	string cas = "good";
	if (l > 20 || w > 20 || h > 20)
		cas = "bad";
	printf("Case %d: %s\n", ++c, cas.c_str());
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	scanf("%d", &t);
	while (t--)
		solve();
	return 0;
}
