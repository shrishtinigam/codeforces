// Codeforces Beta Round #4 (Div. 2 Only) - https://codeforces.com/problemset/problem/4/A
#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x;
    cin >> x;
    if(x%2 == 0 && x > 2)
        cout << "YES";
    else
        cout << "NO";
}