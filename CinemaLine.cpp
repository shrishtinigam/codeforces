// Codeforces Round #202 (Div. 2) https://codeforces.com/problemset/problem/349/A
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

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin >> n;
    int hd(0), tf(0), ff(0);
    rep(i, 0, n)
    {
        int x; cin >> x;
        if(x == 100)
            hd++;
        else if(x == 25)
            tf++;
        else
            ff++;
        
        if(x == 50 && tf == 0)
        {
            cout << "NO";
            return 0;
        }
        if(x == 50 && tf != 0)
            tf--;
        if(x == 100 && (tf > 0 && ff > 0))
        {
            tf--;
            ff--;
        }
        else if(x == 100 && tf > 2)
            tf = tf - 3;
        else if(x == 100)
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}