#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

vector<vector<string>> output = {{"+x", "+y", "-x", "-y"},
								 {"+x", "+z", "-x", "-z"}};
void solve()
{
	int l;
	while (scanf("%d ", &l))
	{
		if (l == 0)
			break;
		//
		char sign, plane;
		int first;
		vector<int> moves(2, 0); 
		for (int i = 0; i < l - 1; i++)
		{
			scanf("%c%c ", &sign, &plane);
			if (i == 0)
				first = plane == 'y' ? 0 : 1;
			if (sign == 'N')
				continue;
			if (plane == 'y')
				moves[0] += (sign == '+' ? 1 : -1) ;
			if (plane == 'z')
				moves[1] += (sign == '+' ? 1 : -1);
		}
		cout << output[first][moves[first]% 4] << endl;
	}
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
