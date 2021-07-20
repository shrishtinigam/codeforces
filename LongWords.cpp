// Codeforces Beta Round #65 (Div. 2) - https://codeforces.com/problemset/problem/71/A
#include <iostream>
#include <ios>
#include <string>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while(T--)
    {
       string x;
       cin >> x;
       if(x.length() > 10)
       {
           int y = x.length() - 2;
           x = x[0] + to_string(y) + x[y+1];
       }
       cout << x << "\n";
    }
}

