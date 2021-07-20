// Codeforces Beta Round #40 (Div. 2) https://codeforces.com/problemset/problem/41/A
#include <iostream>
#include <ios>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y;
    cin >> x >> y;
    reverse(x.begin(), x.end());
    if(x == y)
        cout << "YES";
    else
        cout << "NO";
}
