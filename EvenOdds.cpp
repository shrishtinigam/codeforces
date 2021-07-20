// Codeforces Round #188 (Div. 2) https://codeforces.com/problemset/problem/318/A
#include <iostream>
#include <ios>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    if(n%2 == 0)
    {
        if(q <= n/2)
        {
            cout << (2*q - 1);
        }
        else
        {
            cout << ((q)-(n/2))*2;
        }
    }
    else
    {
        if(q <= (n+1)/2)
        {
            cout << (2*q - 1);
        }
        else
        {
            cout << ((q)-((n+1)/2))*2;
        }
    }
}