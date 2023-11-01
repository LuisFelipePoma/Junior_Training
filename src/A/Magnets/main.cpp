#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    cin>>n;
    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int groups = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i-1][1] == arr[i][0]) groups++;
    }
    cout<<groups<<endl;
}

int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}