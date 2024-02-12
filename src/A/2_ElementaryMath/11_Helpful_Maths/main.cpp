#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <string>
typedef long long ll;

using namespace std;

void solve()
{
	char digit;
	vector<int> numbers;
	while ((digit = getchar()) != EOF)
	{
		if (isalnum(digit))
		{
			numbers.push_back(stoi(&digit));
		}
	}

	sort(numbers.begin(), numbers.end());
	string newOp = "";
	for (const int number : numbers)
	{
		newOp += to_string(number);
		newOp += '+';
	}
	newOp.pop_back();
	cout << newOp << '\n';
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
