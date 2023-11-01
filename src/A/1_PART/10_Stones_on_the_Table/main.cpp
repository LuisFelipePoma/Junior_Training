#include <bits/stdc++.h>
using namespace std;

int n;
string stones;
void solve() {
    cin>>n;
    cin>>stones;
    int neigh = 0;
    for (int i = 0; i < n-1; i++)
    {
        if(stones[i] == stones[i + 1])
            neigh++;
    }
    
    cout<<neigh<<endl;
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}