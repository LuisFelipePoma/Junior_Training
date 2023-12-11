#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, m;
	cin >> n >> m;
	n = n - m;
	
	string plural = (abs(n) == 1 ? "piece" : "pieces");
	if (n < 0)
	{
		printf("Dr. Chaz will have %d %s of chicken left over!\n", n * -1, plural.c_str());
	}
	else
	{
		printf("Dr. Chaz needs %d more %s of chicken!\n", n, plural.c_str());
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
