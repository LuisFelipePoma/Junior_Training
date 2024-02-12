#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, scores;
	cin >> n;
	cin >> scores;
	int max_score = scores, ans = -150000;
	for (int i = 1; i < n; i++)
	{
		cin >> scores;
		ans = ans > max_score - scores ? ans : max_score - scores;
		max_score = max_score > scores ? max_score : scores;
	}
	printf("%d\n", ans);
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
