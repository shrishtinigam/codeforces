// Codeforces Round #215 (Div. 2) https://codeforces.com/problemset/problem/368/B
// SerejaAndSuffixes.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
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
    int n , m, x; cin >> n >> m;
    map <int, int> map1;
    vector <int> v(n), u;
    int uni = 0;
    rep(i, 0, n)
        cin >> v[i];
    reverse(v.begin(), v.end());
    rep(i, 0, n)
    {
        x = v[i];
        if(map1.find(x) == map1.end())
        {
            map1.insert(pair<int, int>(x, 1));
            uni++;
        }
        else
            map1[x]++;
        u.pb(uni);
    }
    reverse(u.begin(), u.end());
    rep(i, 0, m)
    {
        cin >> x;
        cout << u[x-1] << "\n";
    }
}

/* valid method but time limit exceeded
    vector <int> v(n);
    rep(i, 0, n)
        cin >> v[i];
    rep(i, 0, m)
    {
        cin >> x;
        set<int> s(v.begin() + x - 1, v.end());
        cout << s.size() << "\n";
    }
*/