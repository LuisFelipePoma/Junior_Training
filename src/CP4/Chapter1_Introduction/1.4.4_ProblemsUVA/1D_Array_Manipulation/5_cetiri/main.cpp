#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	vector<int> numbers(3);
	int d;
	cin >> numbers[0] >> numbers[1] >> numbers[2];
	d = min(abs(numbers[0] - numbers[1]), abs(numbers[1] - numbers[2]));
	sort(numbers.begin(), numbers.end());
	for (int i = 1; i < 3; i++)
	{
		if (numbers[i - 1] + d != numbers[i])
		{
			cout << numbers[i - 1] + d << endl;
			return;
		}
	}
	cout << numbers[2] + d << endl;
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
