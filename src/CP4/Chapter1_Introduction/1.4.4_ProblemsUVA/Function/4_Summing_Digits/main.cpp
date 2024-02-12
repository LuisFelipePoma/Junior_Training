#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

int f(int n)
{
	if (n < 10)
		return n;
	int sum = 0;
	while (n > 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return f(sum);
}

void solve()
{
	int n;
	while (cin >> n)
	{
		if (n == 0)
			break;
		cout << f(n) << endl;
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
