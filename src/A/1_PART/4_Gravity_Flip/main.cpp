#include <bits/stdc++.h>
using namespace std;

int t;

void solve() {
   cin>>t;
   int a[t];
   for (int i = 0; i < t; i++)
   {
        cin>>a[i];
   }
   sort(a,a+t);    
   for (int i = 0; i < t; i++)
   {
        cout<<a[i]<<" ";
   }
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}