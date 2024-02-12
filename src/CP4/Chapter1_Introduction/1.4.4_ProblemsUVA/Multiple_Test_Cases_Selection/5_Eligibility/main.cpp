#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;

using namespace std;

void solve()
{
	string name, studyDate, birthDate, result = "";
	int courses;

	cin >> name >> studyDate >> birthDate >> courses;
	if (stoi(studyDate.substr(0, 4)) >= 2010 || stoi(birthDate.substr(0, 4)) >= 1991)
		result = "eligible";
	else if (courses >= 41)
		result = "ineligible";
	else
		result = "coach petitions";
	printf("%s %s\n", name.c_str(), result.c_str());
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
