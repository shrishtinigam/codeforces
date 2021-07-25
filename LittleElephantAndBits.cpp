// Codeforces Round #157 (Div. 1) https://codeforces.com/problemset/problem/258/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <cmath>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    string ans = "";
    int y;
    if(x.find_first_not_of('1') == string::npos)
    {
        rep(i, 0, x.length()-1)
            cout << 1;
        return 0;
    }
    rep(i, 0, x.length())
    {
        if(x[i] == '0')
        {
            y = i;
            break;
        }
        cout << x[i];
    }
    rep(i, y+1, x.length())
    {
        cout << x[i];
    }
    return 0;
}