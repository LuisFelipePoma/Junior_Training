#include <algorithm>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int c = 0;
	int n;
	while (cin >> n)
	{
		vector<int> numbers;
		while (n--)
		{
			int x;
			cin >> x;
			numbers.push_back(x);
		}
		int min = *min_element(numbers.begin(), numbers.end());
		int max = *max_element(numbers.begin(), numbers.end());
		printf("Case %d: %d %d %d\n", ++c, min, max, max - min);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	//   cin>>t;
	while (t--)
		solve();
	return 0;
}
