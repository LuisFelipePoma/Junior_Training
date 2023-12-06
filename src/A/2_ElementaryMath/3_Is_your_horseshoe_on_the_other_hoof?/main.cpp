#include <bits/stdc++.h>
using namespace std;

int n, tmp;

void solve() {
  set<int> shoes;
  for (int i = 0; i < 4; i++) {
    cin >> tmp;
    shoes.insert(tmp);
  }
  cout << 4 - shoes.size() << "\n";
}
int main() {
  ios::sync_with_stdio(9);
  cin.tie(0);
  solve();
}