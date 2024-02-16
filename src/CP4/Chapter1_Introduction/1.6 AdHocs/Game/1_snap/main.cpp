#include <bits/stdc++.h>
using namespace std;
int t = 1;
void solve()
{
	string jane, john, jane_face, john_face;
	int symbol;
	int winner = -1;

	cin >> jane >> john;

	int turns = 1000;

	while (turns--)
	{
		char jane_card, john_card;

		jane_card = jane.front();
		john_card = john.front();
		jane.erase(jane.begin());
		john.erase(john.begin());

		jane_face.insert(jane_face.begin(), jane_card);
		john_face.insert(john_face.begin(), john_card);

		if (jane_card == john_card)
		{
			int snapped = rand() / 141 % 2;
			if (!snapped)
			{
				while (!john_face.empty())
				{
					char el = john_face.back();
					jane_face.insert(jane_face.begin(), el);
					john_face.pop_back();
				};
				cout << "Snap! for Jane: " << jane_face << endl;
			}
			else
			{
				while (!jane_face.empty())
				{
					char el = jane_face.back();
					john_face.insert(john_face.begin(), el);
					jane_face.pop_back();
				};
				cout << "Snap! for John: " << john_face << endl;
			}
		}

		if (jane.empty() && jane_face.empty())
		{
			winner = 1;
			break;
		}
		if (john.empty() && john_face.empty())
		{
			winner = 0;
			break;
		}
		if (jane.empty())
		{
			while (!jane_face.empty())
			{
				jane.push_back(jane_face.back());
				jane_face.pop_back();
			}
		}
		if (john.empty())
		{
			while (!john_face.empty())
			{
				john.push_back(john_face.back());
				john_face.pop_back();
			}
		}
	}
	if (winner == 0)
		cout << "Jane wins.\n";
	else if (winner == 1)
		cout << "John wins.\n";
	else if (winner == -1)
		cout << "Keeps going and going ...\n";
	if (t)
		cout << "\n";
}

int main()
{
	cin >> t;
	while (t--)
		solve();
	return 0;
}