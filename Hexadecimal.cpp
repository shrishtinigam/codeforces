// Codeforces Round #125 (Div. 2) https://codeforces.com/problemset/problem/199/A
#include <iostream>
#include <ios>
#include <string>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    ll a, b, c, d, e;
    a = 0; 
    b = 1;
    c = 0;
    e = 0;
    d = 0;
    int count = 0; 
    if(x == 0)
    {
        cout << "0 0 0";
        return 0;
    }
    else if(x == 2)
    {
        cout << "1 1 0";
        return 0;
    }
    else
    {
        while(c != x)
        {
            c = a + b;
            if(c == x)
                break;
            e = d;
            d = a;
            a = b;
            b = c;
        }
    }
    
    cout << e << " " << d << " " << b;
}