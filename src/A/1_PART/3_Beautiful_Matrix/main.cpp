#include <iostream>
using namespace std;

int matrix[5][5];
int x,y,moves = 0;

void solve() {
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin>>matrix[i][j];
            if(matrix[i][j] == 1)
            {
                x = i+1;
                y = j+1;
            }
        }
    }
    // Transformations
    moves = abs(x-3) + abs(y-3);
    cout<<moves<<endl;
}
int main() {
    ios::sync_with_stdio(9);
    cin.tie(0);
    solve();
}