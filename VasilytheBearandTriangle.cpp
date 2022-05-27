// Codeforces Round #195 (Div. 2) https://codeforces.com/problemset/problem/336/A
// VasilytheBearandTriangle.cpp
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
    ll n, m; cin >> n >> m;
    if(n > 0 && m > 0)
        cout << "0 " << n + m << " " << n + m << " 0";
    else if(n < 0 && m > 0)
        cout << -(abs(n) + m) << " 0 0 " << abs(n) + m ;
    else if(n < 0 && m < 0)
        cout << -(abs(n) + abs(m)) << " 0 0 " << -(abs(n) + abs(m));
    else
        cout << "0 " << -(abs(m) + n) << " " << abs(m) + n << " 0";
}
