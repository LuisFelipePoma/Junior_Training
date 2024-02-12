#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	string month;
	int day;
	cin >> month >> day;
	if ((month == "OCT" && day == 31) || (month == "DEC" && day == 25))
		cout << "yup\n";
	else
		cout << "nope\n";
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
