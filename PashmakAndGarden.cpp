// Codeforces Round #261 (Div. 2) https://codeforces.com/problemset/problem/459/A
// PashmakAndGarden.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair
#define cond(x) (x > 1000 || x < -1000)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, x2, y1, y2; cin >> x1 >> y1 >> x2 >> y2;
    int x3, x4, y3, y4;
    if(x1 != x2 && y1 != y2) // diagonals
    {
        if(abs(x1 - x2) != abs(y1 - y2))
        {
            cout << -1;
            return 0;
        }
        x3 = x1; y3 = y2;
        x4 = x2; y4 = y1;
        if(cond(x3) && cond(x4) && cond(y3) && cond(y4))
        {
            cout << -1;
            return 0;
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    else if(y1 == y2)
    {
        x3 = x1; y3 = abs(x1 - x2) + y1;
        x4 = x2; y4 = abs(x1 - x2) + y2;
        if(cond(x3) && cond(x4) && cond(y3) && cond(y4))
        {
            x3 = x1; y3 = -abs(x1 - x2);
            x4 = x2; y4 = -abs(x1 - x2);
            if(cond(x3) && cond(x4) && cond(y3) && cond(y4))
            {
                cout << -1;
                return 0;
            }
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
    else if(x1 == x2)
    {
        x3 = abs(y1 -y2) + x1; y3 = y1;
        x4 = abs(y1 -y2) + x2; y4 = y2;
        if(cond(x3) && cond(x4) && cond(y3) && cond(y4))
        {
            x3 = -abs(y1 -y2); y3 = y1;
            x4 = -abs(y1 -y2); y4 = y2;
            if(cond(x3) && cond(x4) && cond(y3) && cond(y4))
            {
                cout << -1;
                return 0;
            }
        }
        cout << x3 << " " << y3 << " " << x4 << " " << y4;
        return 0;
    }
}