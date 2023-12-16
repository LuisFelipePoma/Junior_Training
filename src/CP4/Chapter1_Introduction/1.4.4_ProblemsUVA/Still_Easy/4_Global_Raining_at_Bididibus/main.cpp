#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	string blocks;
	int ans = 0;
	stack<int> s;
	cin >> blocks;
	for (int i = 0; i < blocks.size(); i++)
	{
		if (blocks[i] == '\\')
		{
			s.push(i);
		}
		else if (blocks[i] == '/' && !s.empty())
		{
			ans += (i - s.top());
			s.pop();
			
		}
	}
	cout << ans << endl;
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
