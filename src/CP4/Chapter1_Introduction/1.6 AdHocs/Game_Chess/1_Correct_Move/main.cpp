#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	int king, queen, move;
	while (cin >> king >> queen >> move)
	{
		if (king == queen)
		{
			cout << "Illegal state\n";
			continue;
		}
		int king_row = king / 8, king_col = king % 8;
		int queen_row = queen / 8, queen_col = queen % 8;
		int move_row = move / 8, move_col = move % 8;
		if (
			(move_row != queen_row && move_col != queen_col) ||
			(king > min(queen, move) && king < max(queen, move) &&
			 ((king_col == queen_col && king_col == move_col) || (king_row == queen_row && king_row == move_row))) ||
			queen == move || move == king)
			cout << "Illegal move\n";
		else if (abs(move - king) == 8 || (abs(move - king) == 1 && king_row == move_row))
		{
			cout << "Move not allowed\n";
		}
		else if ((king == 56 && move == 49) || (king == 0 && move == 9) || (king == 63 && move == 54) || (king == 7 && move == 14))
		{
			cout << "Stop\n";
		}
		else
			cout << "Continue\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	while (t--)
		solve();
	return 0;
}
