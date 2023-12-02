#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	srand(time(0));
	int n, k;
	cin >> n >> k;
	set<char> vocab;
	string password = "";
	password += char(97 + (rand() % k));
	vocab.insert(password[0]);
	for (int i = 1; i < n; i++)
	{
		char voc = char(97 + (rand() % k));
		if (password[i - 1] == voc || (vocab.size() < k && password.find(voc) != string::npos))
		{
			i--;
			continue;
		}
		password += voc;
		vocab.insert(voc);
	}
	cout << password << '\n';
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
