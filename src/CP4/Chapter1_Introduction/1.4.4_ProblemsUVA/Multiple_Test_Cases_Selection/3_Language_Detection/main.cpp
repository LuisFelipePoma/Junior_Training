#include <bits/stdc++.h>
typedef long long ll;

using namespace std;

void solve()
{
	ll c = 0;
	char phrase[100];
	while (scanf("%s", phrase) != EOF)
	{
		string lang = phrase;
		if (lang == "#") break;
		if (lang == "HELLO") lang = "ENGLISH";
		else if (lang == "HOLA") lang = "SPANISH";
		else if (lang == "HALLO") lang = "GERMAN";
		else if (lang == "BONJOUR") lang = "FRENCH";
		else if (lang == "CIAO") lang = "ITALIAN";
		else if (lang == "ZDRAVSTVUJTE")lang = "RUSSIAN";
		else lang = "UNKNOWN";

		printf("Case %lld: %s\n", ++c, lang.c_str());
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
