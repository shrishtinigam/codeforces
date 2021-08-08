// Codeforces Round #187 (Div. 2) https://codeforces.com/problemset/problem/315/A
// SerejaAndBottles.cpp
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
    int n; cin >> n;
    int ans = 0;
    vector <int> a1, b1;
    rep(i, 0, n)
    {
        int a, b; cin >> a >> b;
        a1.pb(a); b1.pb(b);
    }
    for(int i = 0; i < n; i++)
    {
        int openable = false;

        for(int j = 0; j < n; j++)
        {
            if(b1[j] == a1[i] && i != j)
                openable = true;
        }

        ans += (!openable);
    }

    cout << ans;
}