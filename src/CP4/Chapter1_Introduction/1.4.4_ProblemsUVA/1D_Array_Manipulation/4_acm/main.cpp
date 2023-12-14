#include <bits/stdc++.h>
#include <cstring>
typedef long long ll;

using namespace std;

void solve()
{
	int time, ans = 0, correct = 0;
	string problem, status;
	map<string, int> points;
	while (cin >> time)
	{
		if (time == -1)
			break;
		cin >> problem >> status;
		if (status == "wrong")
		{
			points.find(problem) == points.end() ? points[problem] = 20 : points[problem] += 20;
		}
		else
		{
			correct++;
			int penalty = (points.find(problem) == points.end() ? 0 : points[problem]);
			ans += penalty + time;
		}
	}
	cout << correct << " " << ans << endl;
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
