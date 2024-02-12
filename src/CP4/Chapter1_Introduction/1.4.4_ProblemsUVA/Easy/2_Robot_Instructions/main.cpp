#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int n;
	cin >> n;
	vector<int> pos(n);
	cin.ignore();
	for (int i = 0; i < n; i++)
	{
		string instruction;
		getline(cin, instruction);
		if (instruction == "LEFT")
			pos[i] = -1;
		else if (instruction == "RIGHT")
			pos[i] = 1;
		else
			pos[i] = pos[stoi(instruction.substr(8)) - 1];
	}
	cout << accumulate(pos.begin(), pos.end(), 0) << endl;
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
