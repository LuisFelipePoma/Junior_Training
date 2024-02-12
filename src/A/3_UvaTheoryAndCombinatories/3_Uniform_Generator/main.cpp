#include <bits/stdc++.h>
#include <iomanip>
typedef long long ll;

using namespace std;

void solve()
{
	int step, mod;
	while (cin >> step >> mod)
	{
		bool good = true;
		int seed = 0;
		for (int i = 1; i < mod; i++)
		{
			if (seed + step == mod)
			{
				good = false;
				break;
			}
			seed = (seed + step) % mod;
		}
		cout << setw(10) << step << setw(10) << mod << "    " << (good ? "Good Choice\n\n" : "Bad Choise\n\n");
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
