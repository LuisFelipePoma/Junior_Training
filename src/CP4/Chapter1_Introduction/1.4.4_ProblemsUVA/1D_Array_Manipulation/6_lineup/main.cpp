#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<string> names(n), increase, decrease;
	for (auto &it : names)
	{
		cin >> it;
	}
	increase = names;
	sort(increase.begin(), increase.end());
	decrease = increase;
	reverse(decrease.begin(), decrease.end());
	if(names==increase) cout<<"INCREASING\n";
	else if(names==decrease) cout<<"DECREASING\n";
	else cout<<"NEITHER\n";
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
