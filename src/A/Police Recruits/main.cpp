#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin>>n;
    int officers = 0;
    int untreat = 0;
    for (int i = 0; i < n; i++)
    {
        int value = 0;
        cin>>value;
        if(value == -1)
        {
            if (officers == 0) untreat++;
            else officers--;
        }
        else
            officers+=value;
    }
    cout<<untreat<<endl;
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}