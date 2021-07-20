// Codeforces Round #107 (Div. 2) https://codeforces.com/problemset/problem/151/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x = min(((k*l)/nl),(c*d));
    x = min(x,(p/np));
    cout << x/n;
}