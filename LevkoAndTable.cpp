// Codeforces Round #210 (Div. 2) https://codeforces.com/problemset/problem/361/A
// LevkoAndTable.cpp
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
    int n, k; cin >> n >> k;

    rep(i, 0, n)
    {
        rep(j, 0, n)
        {
            if(i == j)
                cout << k << " ";
            else
                cout << 0 << " ";
        }
        cout << "\n";
    }
}