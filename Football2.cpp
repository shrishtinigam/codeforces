// Codeforces Beta Round #77 (Div. 2 Only) https://codeforces.com/problemset/problem/96/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    char x = n[0];
    int count = 0;
    rep(i, 1, n.length())
    {
        char y = n[i];
        if(x == y)
        {
            count++;
            if(count>=6)
            {
                cout << "YES";
                return 0;
            }
        }
        if(x != y)
            count = 0;
        x = y;
    }
    cout << "NO";
}