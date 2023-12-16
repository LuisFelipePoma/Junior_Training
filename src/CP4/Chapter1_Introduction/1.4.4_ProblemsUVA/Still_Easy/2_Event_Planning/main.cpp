#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n, b, h, w;
	while (cin >> n >> b >> h >> w)
	{
		int m = INT_MAX;
		int price_per_person;
		for (int i = 0; i < h; i++)
		{
			int beds;
			cin >> price_per_person;
			for (int j = 0; j < w; j++)
			{
				cin >> beds;
				if (beds >= n && (n * price_per_person) < m)
				{
					m = n * price_per_person;
				}
			}
		}
		if(m<=b) cout<<m<<endl;
		else cout<<"stay home\n";
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
