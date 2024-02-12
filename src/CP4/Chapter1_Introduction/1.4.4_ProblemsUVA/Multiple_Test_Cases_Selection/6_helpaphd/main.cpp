#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int a, b;
	char op;
	string token;
	cin >> token;
	if (token.find("=") != -1)
	{
		cout << "skipped\n";
		return;
	}
	a = stoi(token.substr(0, token.find("+")));
	b = stoi(token.substr(token.find("+"), token.size() - 1));
	cout << a + b << endl;
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
