#include <array>
#include <bits/stdc++.h>
typedef long long ll;

using namespace std;
int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

bool isValid(int a_day, int a_month, int a_year, int b_day, int b_month, int b_year)
{
	// Verify if the day is init of month and subtract 1 day
	if (--b_day == 0)
	{
		// Verify if the month is init of year and subtract 1 month
		if (--b_month == 0)
		{
			--b_year;
			b_month = 12;
		}

		// b_day in this point is 0, so we need to get the last day of the month
		b_day = months[b_month - 1];

		// Verify if the year is leap and the month is february
		bool isleap = (b_year % 4 == 0 && (b_year % 100 != 0 || b_year % 400 == 0));
		if (b_month == 2 && isleap)
			b_day = 29;
	}
	// Verify if the dates before and after are the same (later subtract in the "ifs")
	return a_day == b_day && a_month == b_month && a_year == b_year;
}
void solve()
{
	unsigned int n;
	while (scanf("%d\n", &n) && n != 0)
	{
		array<int, 4> after = {0, 0, 0, 0};
		int sum = 0, count = 0;
		while (n--)
		{
			array<int, 4> before;
			scanf("%d %d %d %d\n", &before[0], &before[1], &before[2], &before[3]);
			if (isValid(after[0], after[1], after[2], before[0], before[1], before[2]))
			{
				sum += before[3] - after[3];
				count++;
			}
			after = {before};
		}
		cout << count << " " << sum << endl;
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
