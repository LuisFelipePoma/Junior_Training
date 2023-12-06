#include <bits/stdc++.h>
using namespace std;

int y, w, dot;
string poss[6] = {"1/6", "1/3", "1/2", "2/3", "5/6", "1/1"};
void solve()
{
	cin >> y >> w;
	dot = (6 - max(y, w));
	cout << poss[dot] << '\n';
}
int main()
{

	ios::sync_with_stdio(9);
	cin.tie(0);
	solve();
}