#include <bits/stdc++.h>
using namespace std;
 
string word;
 
 
void solve() {
    cin>>word;
    int moves = 0;
    int next = 0;
    for (int i = 0; i < word.length(); i++)
    {
        int init = word[i] - 97;
        int value = abs(next - init);
        if (value > 13 ) moves += 26-value;
        else moves += value;
        next = init;
    }
    cout<<moves;
 
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}