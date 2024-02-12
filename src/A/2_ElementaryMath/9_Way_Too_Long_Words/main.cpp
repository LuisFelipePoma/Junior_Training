#include <bits/stdc++.h>
#include <cstdio>
#include <string>
typedef long long ll;

using namespace std;

void solve()
{
	string word;
	getline(cin, word);
	if (word.size() <= 10)
	{
		cout << word << "\n";
		return;
	}

	int n = word.substr(1, word.size() - 2).size();
	cout << word[0] + to_string(n) + word[word.size() - 1] << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	cin.ignore();
	while (t--)
		solve();
	return 0;
}
