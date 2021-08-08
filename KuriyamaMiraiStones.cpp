// Codeforces Round #248 (Div. 2) https://codeforces.com/problemset/problem/433/B
// KuriyamaMiraiStones.cpp
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
    vector <int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    vector <ll> s1(n+1);
    vector <ll> s2(n+1);
    s1[0] = 0; s2[0] = 0;
    rep(i, 1, n+1)
        s1[i] = s1[i-1] + v[i-1];
    sort(v.begin(), v.end());
    rep(i, 1, n+1)
        s2[i] = s2[i-1] + v[i-1];
    int m; cin >> m;
    rep(i, 0, m)
    {
        int t, l, r; cin >> t >> l >> r;
        cout << (t == 1 ? s1[r]-s1[l-1] : s2[r]-s2[l-1]) << "\n"; 
    }
}