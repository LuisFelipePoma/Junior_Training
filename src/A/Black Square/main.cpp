#include <bits/stdc++.h>
using namespace std;

int n;
string strips;

void solve() {
    int calories[4];
    for (int i = 0; i < 4; i++)
    {
        cin>>calories[i];
    }
    cin>>strips;
    int total = 0;
    for (int i = 0; i < strips.size(); i++)
    {
        int value = int(strips[i]) - 48;
        total += calories[value-1];
    }
    cout<<total;

}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}