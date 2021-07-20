// Codeforces Beta Round #85 (Div. 2 Only) https://codeforces.com/problemset/problem/112/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b;
    cin >> a >> b;
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);
    if(a == b)
        cout << 0;
    else if(a < b)
        cout << -1;
    else
        cout << 1;
}

