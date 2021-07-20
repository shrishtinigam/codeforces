// Codeforces Beta Round #55 (Div. 2) https://codeforces.com/problemset/problem/59/A
#include <iostream>
#include <ios>
#include <string>
#include <cctype>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    int up = 0;
    REP(i, 0, x.length())
    {
        if(isupper(x[i]))
            up++;
    }
    if(up > x.length()/2)
        REP(i, 0, x.length())
            cout << (char)toupper(x[i]);
    else
        REP(i, 0, x.length())
            cout << (char)tolower(x[i]);
}
