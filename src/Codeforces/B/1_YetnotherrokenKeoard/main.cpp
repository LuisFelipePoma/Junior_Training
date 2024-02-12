#include <bits/stdc++.h>
#include <cctype>
typedef long long ll;

using namespace std;

void solve()
{
	char let;						  // letter
	int index = 0;					  // index of letters to store in stacks
	stack<int> posLower;			  // stack to save positions of lower case letters
	stack<int> posUpper;			  // stack to save positions of upper case letters
	string chain = "";				  // chain of letters
	while ((let = cin.get()) != '\n') // get char by char
	{
		if (let == 'b')
		{
			if (posLower.size() <= 0) // in case of no lower case letters
				continue;
			chain.replace(posLower.top(), 1, "_"); // replace the last lower letter with '_'
			posLower.pop();						   // remove the last lower letter
		}
		else if (let == 'B')
		{
			if (posUpper.size() <= 0) // in case of no upper case letters
				continue;
			chain.replace(posUpper.top(), 1, "_"); // replace the last upper letter with '_'
			posUpper.pop();						   // remove the last upper letter
		}
		else
		{
			if (islower(let))		  // if lower case letter
				posLower.push(index); // save the position of the letter
			else
				posUpper.push(index); // if upper case letter, save the position of the letter

			chain.push_back(let);
			index++;
		}
	}

	// Print the chain without '_'
	for (int i = 0; i < chain.size(); i++)
	{
		if (chain[i] != '_')
			cout << chain[i];
	}
	cout << '\n';
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
