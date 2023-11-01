#include <bits/stdc++.h>
using namespace std;

int n;

void solve() {
    
    cin>>n;
    int cards[n];
    for (int i = 0; i < n; i++)
    {
        cin>>cards[i];
    }
    int Sereja = 0;
    int Dima = 0;

    int rigth = n - 1;
    int turn=0;
    for (int left = 0; left <= rigth;)
    {
        int value = max(cards[left],cards[rigth]);
        if(turn % 2 ==0)
            Sereja += value;
        else
            Dima += value;
        
        if (cards[left]>cards[rigth])left++;
        else rigth--;
        turn++;
    }
    
    cout<< Sereja << " " << Dima << endl;  
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}