// Codeforces Round #114 (Div. 2) https://codeforces.com/problemset/problem/168/A
// WizardsandDemonstration.cpp

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
    float n, x, y; cin >> n >> x >> y;
    int req = ceil(n*y/100);
    if(x < req)
        cout << req - int(x);
    else
        cout << 0;
}