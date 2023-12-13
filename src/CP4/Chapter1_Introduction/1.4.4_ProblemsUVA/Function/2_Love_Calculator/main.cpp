#include <bits/stdc++.h>
#include <string>
typedef long long ll;

using namespace std;

int sumNumber(int ratio)
{
	int r = 0;
	while (ratio > 0)
	{
		r += ratio % 10;
		ratio /= 10;
	}
	return r;
}
int toRatio(int sum)
{
	if (sum / 10 == 0)
		return sum;
	else
		return toRatio(sumNumber(sum));
}

void solve()
{
	string a, b;
	while (getline(cin,a))
	{
		getline(cin,b);
		int ratioA = 0, ratioB = 0;
		for (char let : a)
		{
			if ((let >= 'a' && let <= 'z') || (let >= 'A' && let <= 'Z'))
				ratioA += tolower(let) - 'a' + 1;
		}
		for (char let : b)
		{
			if ((let >= 'a' && let <= 'z') || (let >= 'A' && let <= 'Z'))
				ratioB += tolower(let) - 'a' + 1;
		}
		double a_r = 0, b_r = 0;
		a_r = toRatio(ratioA);
		b_r = toRatio(ratioB);
		double ans = double(min(a_r, b_r) / max(a_r, b_r) * 100.00);
		ans = ans > 100 ? 100 : ans;
		printf("%.2lf %%\n", ans);
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
