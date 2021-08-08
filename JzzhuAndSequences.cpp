// Codeforces Round #257 (Div. 2) https://codeforces.com/problemset/problem/450/B
// JzzhuAndSequences.cpp
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll M = 1000000007;
    ll x, y, d; 
    cin >> x >> y >> d;
    vector <ll> v {x, y, y-x, -x, -y, x-y};
    cout << ((v[(d-1) % 6] % M) + M) % M;
}
    //rep(i, 0, 6)
        //cout << v[i] << " ";