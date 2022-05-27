// Codeforces Beta Round #94 (Div. 2 Only) https://codeforces.com/problemset/problem/129/A
// Cookies.cpp
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
    int n, o(0), e(0), x; cin >> n;
    rep(i, 0, n)
    {
        cin >> x;
        if(x % 2 == 0)
            e++;
        else
            o++;
    }

    if(o % 2 != 0)
        cout << o;
    else
        cout << e;
}