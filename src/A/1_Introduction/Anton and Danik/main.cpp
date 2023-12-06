#include <iostream>
using namespace std;

int main()
{    
    int n;
    cin>>n;
    int A=0, D=0;
    while(n--)
    {
        char x;
        cin >> x;
        x == 'A'? A++:D++; 
    }
    if (A > D) cout<<"Anton"<<endl;
    else if (A < D) cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
    return 0;
}