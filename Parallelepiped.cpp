// Codeforces Round #138 (Div. 2) https://codeforces.com/problemset/problem/224/A
#include <iostream>
#include <ios>
#include <cmath>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll ab, bc, ca;
    cin >> ab >> bc >> ca;
    ll abc = sqrt(ab*bc*ca);
    cout << 4*((abc/ab) + (abc/bc) + (abc/ca));
}