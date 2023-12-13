#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int x, y, n;
	cin >> x >> y >> n;
	for (int i = 1; i <= n; i++)
	{
		bool fizz = i % x == 0 ? true : false;
		bool buzz = i % y == 0 ? true : false;

		if (fizz && buzz)
			cout << "FizzBuzz\n";
		else if (fizz)
			cout << "Fizz\n";
		else if (buzz)
			cout << "Buzz\n";
		else
			cout << i << endl;
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
