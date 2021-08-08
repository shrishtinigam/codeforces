// Codeforces Round #175 (Div. 2) https://codeforces.com/problemset/problem/285/C
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
    int n;
    cin >> n;
    vector <ll> v(n);
    rep(i, 0, n)
        cin >> v[i];
    sort(v.begin(), v.end());
    ll steps = 0;
    for(ll i = 0; i < n; i++)
    {
        ll x = i + 1;
        steps += (abs(v[i] - x));
    }
    cout << steps;
}