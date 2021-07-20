// Codeforces Round #172 (Div. 2) https://codeforces.com/problemset/problem/281/A
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
    cout << (char)toupper(x[0]);
    REP(i, 1, x.length())
        cout << (x[i]);
}
