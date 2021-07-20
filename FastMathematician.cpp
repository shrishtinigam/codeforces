// Codeforces Beta Round #57 (Div. 2) https://codeforces.com/problemset/problem/61/A
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x, y, z;
    cin >> x >> y;
    z = "";
    REP(i, 0, x.length())
    {
        if(x[i] == y[i])
            z = z + '0';
        else
            z = z + '1';
    }
    cout << z;
}
