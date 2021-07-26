// BoysAndGirls.cpp
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
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int g, b;
    cin >> b >> g;
    if(b == g)
    {
        rep(i, 0, b)
            cout << "GB";
        return 0;
    }
    if(b > g)
    {
        rep(i, 0, g)
            cout << "BG";
        rep(i, 0, b-g)
            cout << "B";
        return 0;
    }
    if(b < g)
    {
        rep(i, 0, b)
            cout << "GB";
        rep(i, 0, g-b)
            cout << "G";
        return 0;
    }
}