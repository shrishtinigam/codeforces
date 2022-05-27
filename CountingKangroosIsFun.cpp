// Codeforces Round #219 (Div. 1) https://codeforces.com/contest/372/problem/A
// CountingKangroosIsFun.cpp
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
    sort(v.begin(), v.end());
    int i(0), j((n/2));
    int ans = n;
    while(i < (n/2) && j < n)
    {
        if(v[i] * 2 <= v[j])
        {
            i++; j++;
            ans--;
        }
        else
        {
            j++;
        }
    }

    cout << ans;
}