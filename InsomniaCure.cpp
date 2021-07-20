// Codeforces Round #105 (Div. 2) https://codeforces.com/problemset/problem/148/A
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l,m,n,d;
    cin >> k >> l >> m >> n >> d;
    int ans = 0;
    REP(i,1,d+1)
    {
        if(i % k == 0 ||i % l == 0 ||i % m == 0 ||i % n == 0)
            ans++;
    }
    cout << ans;
}

