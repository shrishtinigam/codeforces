// Codeforces Round #192 (Div. 2) https://codeforces.com/problemset/problem/330/A
// Cakeminator.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>
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
    int n, m; cin >> n >> m;
    char x;
    vector <vector <int>> v;
    rep(i, 0, n)
    {
        vector <int> k;
        rep(j, 0, m)
        {
            cin >> x;
            if(x == 'S')
                k.pb(1);
            else
                k.pb(0);
        }
        v.pb(k);
    }
    int ans = 0;
    
    rep(i, 0, n)
    {
        if (count(v[i].begin(), v[i].end(), 0) == m)
        {
            ans += m;
            fill(v[i].begin(), v[i].end(), 2);
        }
    }
    
    int temp(0), flag(0);
    rep(i, 0, m)
    {
        rep(j, 0, n)
        {
            if(v[j][i] == 1)
            {
                flag = 1;
                break;
            }
            else if(v[j][i] == 0)
                temp++;
        }
        if(flag == 0)
            ans = ans + temp;
        temp = 0;
        flag = 0;
    }
    cout << ans;
}

/*
rep(i, 0, n)
    {
        rep(j, 0, m)
            cout << v[i][j] << " ";
        cout << "\n";
    }
*/