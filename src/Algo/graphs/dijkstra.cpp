#include<bits/stdc++.h>
using namespace std;

const int maxn = 1e5 + 5;
const int INF = 1e9;

int d[maxn];
bool selected[maxn];
vector<pair<int, int>> adj[maxn];

int main() {
    int n, m; cin >> n >> m;
    for(int i = 0; i < m; i++) {
        int a, b, w; cin >> a >> b >> w;
        a--; b--;

        adj[a].push_back({b, w});
        adj[b].push_back({a, w});
    }

    for(int i = 0; i < n; i++) d[i] = INF;

    d[0] = 0;

    // O(n ^ 2)
    for(int i = 0; i < n; i++) {
        int v = -1, mind = INF;

        // MINIMA DISTANCIA
        for(int j = 0; j < n; j++) {
            if(selected[j]) continue;

            if(d[j] < mind) {
                mind = d[j];
                v = j;
            }
        }

        selected[v] = true;

        // ACTUALIZAMOS SUS VECINOS
        for(auto e : adj[v]) {
            int to = e.first, w = e.second;

            if(selected[to]) continue;

            if(d[v] + w < d[to]) {
                d[to] = d[v] + w;
            }
        }
    }

    for(int i = 0; i < n; i++) cout << d[i] << " ";

    return 0;
}
