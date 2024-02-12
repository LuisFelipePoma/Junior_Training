#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int p;
int findI(int x)
{
	int digits = to_string(x).size();
	p++;

	if (x == digits)
		return p;
	return findI(digits);
}

void solve()
{
	string n;
	while (cin >> n)
	{
		p = 1;
		if (n == "END")
			break;
		if (n == "1")
			cout << "1" << endl;
		else
			cout << findI((n.size())) << endl;
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
