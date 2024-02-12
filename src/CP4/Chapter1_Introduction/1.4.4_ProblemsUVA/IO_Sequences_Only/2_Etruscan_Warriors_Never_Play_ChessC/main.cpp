#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
// Explain
// The quadratic equation used in this context is derived from the sum of the first
// k natural numbers, which is given by the formula:

// 1 + 2 + 3 + … + k = (k(k+1))/2

// Let's set Sk=k(k+1)/2. We want to find the largest k such that Sk <= n.This inequality can be written as:

// k(k+1)/2 <= n

// We resolve this equation:

// k^2 + k - 2n <= 0
// k = (−1 + sqrt(1 + 8n)/ 2

void solve()
{
	ll n;
	cin >> n;
	ll k = (-1 + std::sqrt(1 + 8 * n)) / 2;
	cout << k << endl;
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
