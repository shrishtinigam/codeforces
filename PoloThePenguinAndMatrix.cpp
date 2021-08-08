// Codeforces Round #177 (Div. 2) https://codeforces.com/problemset/problem/289/B
// PoloThePenguinAndMatrix.cpp
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

// Median will be the number that will give the least number of steps

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, d, x, y;
    cin >> n >> m >> d;
    int flag1(1), flag2(1);
    vector <int> v;
    cin >> y;
    v.pb(y);
    int sum = y;
    int mod1 = y % d;
    if(y % d != mod1 && flag1 == 1)
    flag1 = 0;
    rep(i, 1, n*m)
    {
        cin >> x;
        sum += x;
        v.pb(x);
        if(x % d != mod1 && flag1 == 1)
            flag1 = 0;
        if(x != y)
            flag2 = 0;
        y = x;
    }
    if(flag1 == 0 && flag2 == 0)
    {
        cout << "-1";
        return 0;
    }
    if(flag2 == 1)
    {
        cout << "0";
        return 0;
    }
    int ans = 0;
    sort(v.begin(), v.end());
    int mid = 0;
    if(v.size() % 2 != 0)
        mid = v[((v.size() + 1)/2) - 1];
    else
        mid = (v[(v.size()/2) - 1] + v[(v.size()/2)]) /  2;
    
    if(flag1 == 1 && flag2 == 0)
    {
        rep(i, 0, n*m)
            ans += abs(mid - v[i]);
    }
    cout << ans/d;
    return 0;
}