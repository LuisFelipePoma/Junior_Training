#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	char letter, letterPrev;
	letterPrev = getchar();
	while (true)
	{
		letter = getchar();
		if (letter == '\n') break;
		if (letterPrev == 's' && letter == 's')
		{
			cout << "hiss\n";
			return;
		}
		letterPrev = letter;
	}
	cout << "no hiss\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
