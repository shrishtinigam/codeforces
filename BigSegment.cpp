// Codeforces Round #149 (Div. 2) https://codeforces.com/problemset/problem/242/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <cmath>
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
    int n;
    cin >> n;
    ll maxr(0), minl(1000000001);
    vector <int> l(n);
    vector <int> r(n);
    rep(i, 0, n)
    {
        ll x;
        cin >> x;
        l[i] = x;
        if(x < minl)
            minl = x;
        cin >> x;
        if(x > maxr)
            maxr = x;
        r[i] = x;
    }
    rep(i, 0, n)
    {
        if(l[i] <= minl && r[i] >= maxr)
        {    
            cout << i+1;
            return 0;
        }
    }
    cout << -1;
    return 0;
}