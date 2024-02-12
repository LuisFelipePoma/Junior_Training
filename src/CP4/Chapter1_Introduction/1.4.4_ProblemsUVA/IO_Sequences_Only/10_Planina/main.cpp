#include <bits/stdc++.h>
#include <cmath>
typedef long long ll;

using namespace std;

void solve()
{
	// we use the formula 4^n = (2^n)^2
	int n, a, b, c, d;
	cin >> n;
	a = pow(4, n); // we use the pow function to calculate 4^n (numbers of sections(squares) in the n-th iteration)
	b = sqrt(a);   // we use the sqrt function to calculate the square root of a (numbers of rows of points in the n-th iteration)
	c = b + 1;	   // we add 1 to the square root of a (numbers of rows of points total in the n-th iteration)
	d = c * c;	   // we square c (calculate the number of points in the n-th iteration)
	cout << d << endl;
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
