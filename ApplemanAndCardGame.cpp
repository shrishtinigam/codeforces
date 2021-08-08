// Codeforces Round #263 (Div. 2) https://codeforces.com/problemset/problem/462/B
// ApplemanAndCardGame.cpp

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>
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
    vector <ll> v;
    ll n, k; cin >> n >> k;
    string str; cin >> str;
    sort(str.begin(), str.end());
    ll cnt(1);
    char y = str[0];
    rep(i, 1, str.length())
    {
        char x = str[i];
        if(x == y)
            cnt++;
        else
        {
            v.pb(cnt);
            cnt = 1;
        }
        y = x;
    }
    v.pb(cnt);
    sort(v.begin(), v.end(), greater<ll>());
    ll i(0);
    ll ans(0);
    while(k != 0)
    {
        if(k >= v[i])
        {
            k = k - v[i];
            ans += (v[i] * v[i]);
            i++;
        }
        else
        {
            ans += (k * k);
            k = 0;
        }
    }

    cout << ans;
}