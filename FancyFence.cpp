// Codeforces Round #165 (Div. 2) https://codeforces.com/problemset/problem/270/A
// FancyFence.cpp

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
    int t; cin >> t;
    float x;
    while(t--)
    {
        cin >> x;
        if((360/(180-x)) == int(360/(180-x)))
        {
            cout << "YES\n";
            continue;
        }
        cout << "NO\n";
    }
}