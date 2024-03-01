#include <bits/stdc++.h>
using namespace std;

const int size_max = 52;

int c = 0;

void solve()
{
	vector<string> cards(size_max);
	for (int i = 0; i < size_max; i++)
		cin >> cards[i];

	int times = 3, y = 0;
	int idxcard = size_max - 26;
	while (times--)
	{
		int value_card = isdigit(cards[idxcard][0]) ? cards[idxcard][0] - '0' : 10;
		y += value_card;
		value_card == 10 ? idxcard-- : idxcard -= 11 - value_card;
	}
	printf("Case %d: %s\n", ++c, cards[y + 25 - idxcard].c_str());
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