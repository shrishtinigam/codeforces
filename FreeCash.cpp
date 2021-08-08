// Codeforces Round #147 (Div. 2) https://codeforces.com/problemset/problem/237/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int x, y, x1, y1, c(1), cmax(1), flag(0);
    cin >> x1 >> y1;
    rep(i, 1, n)
    {
        cin >> x >> y;
        if(x1 == x && y1 == y)
        {
            flag = 1;
            c++;
            if(c >= cmax)
                cmax = c;
        }
        else
        {
            flag = 0;
            c = 1;
        }
        x1 = x; y1 = y;
    }

    cout << cmax;
}