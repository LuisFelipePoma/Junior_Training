#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;
char url[101];
int score, c = 0;
void solve()
{
	int n = 10, max = 0;
	map<int, std::vector<string>> recomendations;
	while (n--)
	{
		scanf("%s %d", url, &score);
		recomendations[score].push_back(url);
		max = max < score ? score : max;
	}
	auto ans = recomendations[max];
	printf("Case #%d:\n", ++c);
	for (int i = 0; i < ans.size(); i++)
	{
		printf("%s\n", ans[i].c_str());
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	scanf("%d", &t);
	while (t--)
		solve();
	return 0;
}
