// Codeforces Beta Round #96 (Div. 2) http://codeforces.com/problemset/problem/133/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    REP(i,0,x.length())
    {
        if(x[i] == 'H' || x[i] == 'Q' || x[i] == '9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}