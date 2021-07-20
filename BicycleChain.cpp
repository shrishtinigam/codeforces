// Codeforces Round #132 (Div. 2) https://codeforces.com/problemset/problem/215/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    vector <int> ng;
    vector <int> mg;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        ng.pb(x);
    }
    cin >> m;
    rep(i, 0, m)
    {
        int x;
        cin >> x;
        mg.pb(x);
    }
    vector <int> ratios;
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if(mg[j]%ng[i] == 0)
                ratios.pb(mg[j]/ng[i]);
        }
    }

    int max = ratios[max_element(ratios.begin(), ratios.end()) - ratios.begin()];
    cout << count(ratios.begin(), ratios.end(), max);
}