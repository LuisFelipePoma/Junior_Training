#include <bits/stdc++.h>
#include <string>
typedef long long ll;

using namespace std;

void solve()
{
	set<char> letters;
	std::string letter;
	getline(cin, letter);
	for (const char i : letter)
	{
		if (isalpha(i))
			letters.insert(i);
	}
	printf("%d\n", int(letters.size()));
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
