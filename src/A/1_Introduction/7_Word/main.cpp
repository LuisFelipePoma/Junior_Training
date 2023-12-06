#include <bits/stdc++.h>

using namespace std;

string word;

void to_upper() {
  for (int i = 0; i < word.size(); i++) {
    word[i] = toupper(word[i]);
  }
  cout << word << endl;
}
void to_lower() {
  for (int i = 0; i < word.size(); i++) {
    word[i] = tolower(word[i]);
  }
  cout << word << endl;
}

void solve() {
  cin >> word;
  int count = 0;
  for (int i = 0; i < word.size(); i++) {
    if (isupper(word[i]))
      count++;
  }
  if (count > word.size() / 2)
    to_upper();
  else
    to_lower();
}

int main() {
  ios::sync_with_stdio(9);
  cin.tie(0);
  solve();
}