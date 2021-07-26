// Codeforces Round #151 (Div. 2) https://codeforces.com/problemset/problem/246/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
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
    int n;
    cin >> n;
    ll sum = 0;
    vector <int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        sum += v[i];
    }
    if(sum % n == 0)
    {
        cout << n;
        return 0;
    }
    cout << n-1;
}