// Codeforces Beta Round #27 (Codeforces format, Div. 2) https://codeforces.com/problemset/problem/27/A
// NextTest.cpp
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
    rep(i, 0, n)
    {
        if(v[i] != i+1)
        {
            cout << i + 1;
            return 0;
        }
    }
    cout << n + 1;
}