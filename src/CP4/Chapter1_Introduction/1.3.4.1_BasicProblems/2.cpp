#include <bits/stdc++.h>
using namespace std;

// 2. Given an integer n (n  15), print ⇡ to n digits after the decimal point (rounded).
// (e.g., for n = 2, print 3.14; for n = 4, print 3.1416; for n = 5, prints 3.14159.)
int main()
{
	const double PI = atan(1.0) * 4;
	int n;
	cin >> n;
	cout << setprecision(n) << PI << "\n";
	return 0;
}
