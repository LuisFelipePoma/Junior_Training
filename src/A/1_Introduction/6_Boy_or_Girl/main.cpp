#include <bits/stdc++.h>
using namespace std;

string user;   
set<char> letters;
void solve() {
   cin>>user;
   for (int i = 0; i < user.size(); i++)
   {
        letters.insert(user[i]);
   }
    if (letters.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
 
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}