// Codeforces Round #261 (Div. 2) https://codeforces.com/problemset/problem/459/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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
    ll n;
    cin >> n;
    vector <ll> f(n);
    rep(i,0,n)
        cin >> f[i];
    sort(f.begin(), f.end());
    ll num_min = 0;
    ll num_max = 0;
    ll max, count;
    if(f[0] != f[n-1])
    {
        num_min = upper_bound(f.begin(), f.end(), f[0]) - f.begin();
        num_max = find(f.begin(), f.end(), f[n-1]) - f.begin();
        count = num_min * (n-num_max);
    }
    else
    {
        count = (n*(n-1))/2;
    }
    max = f[n - 1] - f[0];
    cout << max << " " << count;
}