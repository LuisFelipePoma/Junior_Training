#include <bits/stdc++.h>
using namespace std;
string a, b;
void solve()
{
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        a[i]= tolower(a[i]);
        b[i]= tolower(b[i]);
    }
    int f = a.compare(b);
    if (f < 0)
        cout << -1 << endl;
    else if (f > 0 )
        cout << 1 << endl;
    else
        cout << 0 << endl;
}
int main()
{
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}