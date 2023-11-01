#include <iostream>
using namespace std;

int main()
{    
    int n,h;
    cin>>n>>h;
    int width = 0;
    while(n--)
    {
        int a;
        cin>>a;
        a>h? width+= 2:width++; 
    }
    cout<<width<<endl;
    return 0;
}