// CutRibbon.cpp
// Codeforces Round #119 (Div. 2) https://codeforces.com/problemset/problem/189/A
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    vector <int> v(3);
    rep(i, 0, 3)
        cin >> v[i];
    sort(v.begin(), v.end());
    if(n % v[0] == 0)
    {
        cout << n/v[0];
        return 0;
    }
    int ans = 0;
    rep(x, 0, 4001)
    {
        rep(y, 0, 4001)
        {
            int zc = n - (x*v[0] + y*v[1]);
            if(zc < 0)
                break;
            double z = (zc/(double)v[2]);
            if(z == (int)z)
                ans = max(ans, (int) z + y + x);
        }
    }
    cout << ans;
}