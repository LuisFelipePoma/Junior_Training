#include <bits/stdc++.h>
using namespace std;

int n[3];
int problems = 0;
void solve() {
    int count = 0;
    for (int i = 0; i < 3; i++)
    {
        cin>>n[i];
        if(n[i] == 1) count+=1;
    }
    if (count>=2)
        problems++;  
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    int t;
    cin >> t;
    for(int i = 1; i<=t; ++i) {
        solve();
    }
    cout<<problems<<endl;
}

