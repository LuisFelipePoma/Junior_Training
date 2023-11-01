#include <bits/stdc++.h>
using namespace std;

int k, r, diff;

int result;

void solve()
{
    cin >> k >> r;
    int i = 1;
    while (true)
    {
        result = k * i;
        if (result % 10 == 0 || result % 10 == r)
            break;
        i++;
    }
    cout << i;
}
int main()
{
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}