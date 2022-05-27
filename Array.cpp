// Codeforces Round #181 (Div. 2) https://codeforces.com/problemset/problem/300/A
// Array.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
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
    int n, c(0); cin >> n;
    vector <int> v(n);
    rep(i, 0, n)
    {
        cin >> v[i];
        if(v[i] < 0)
            c++;
    }
    sort(v.begin(), v.end());
    cout << "1 " << v[0] << "\n";
    if(c % 2 != 0)
    {
        int flag = 0;
        cout << n - 2 << " ";
        rep(i, 1, n)
        {
            if(v[i] == 0 && flag == 0)
            {
                flag = 1;
                continue;
            }
            cout << v[i] << " ";
        }
        cout << "\n" << 1 << " " << 0;
    }
    else
    {
        int flag = 0;
        cout << n - 3 << " ";
        rep(i, 2, n)
        {
            if(v[i] == 0 && flag == 0)
            {
                flag = 1;
                continue;
            }
            cout << v[i] << " ";
        }
        cout << "\n" << 2 << " " << 0 << " " << v[1];
    }
    
}