// Codeforces Beta Round #89 (Div. 2) https://codeforces.com/problemset/problem/118/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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

    for (int r = -n; r <= n; ++r)
    {
        int t = n - abs(r);
        for (int i = 0; i < abs(r); ++i)
        {
            cout << "  ";
        }
        for (int i = 0; i < t; ++i)
        {
            cout << i << " ";
        }
        for (int i = t; i > 0; --i)
        {
            cout << i << " ";
        }
        cout << 0 << endl;
    }
}