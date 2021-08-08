// Codeforces Round #176 (Div. 2) https://codeforces.com/problemset/problem/287/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

bool func(char a, char b, char c, char d)
{
    vector <char> v = {a, b, c, d};
    sort(v.begin(), v.end());
    if((v[0] == v[2] && v[0] != v[3]))
        return true;
    reverse(v.begin(), v.end());
    if(v[0] == v[2] && v[0] != v[3])
        return true;
    if(v[0] == v[3])
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector <vector <char>> v(4);
    rep(i, 0, 4)
    {
        rep(j, 0, 4)
        {
            char x;
            cin >> x;
            v[i].pb(x);
        }
    }
    rep(i, 0, 3)
    {
        rep(j, 0, 3)
        {
            if(func(v[i][j], v[i][j+1], v[i+1][j], v[i+1][j+1]) == true)
            {
                cout << "YES";
                return 0;
            }

        }
    }
    cout << "NO";
}