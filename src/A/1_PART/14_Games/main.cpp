#include <bits/stdc++.h>
using namespace std;
 
int n; 
vector<pair<int,int>> teams;

void solve() {
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        teams.push_back(pair<int,int>(a,b)); 
    }
    int guests = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(teams[i].first==teams[j].second) 
                guests++;
        }   
    }
    cout<<guests<<endl;
    
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}