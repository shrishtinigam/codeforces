// Codeforces Round #258 (Div. 2) https://codeforces.com/problemset/problem/451/A
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
    int n, m;
    cin >> n >> m;
    int verdict = min(n,m);
    if(verdict % 2 == 0 )
        cout << "Malvika" << "\n";
    else
        cout << "Akshat" << "\n";
}


