// Codeforces Beta Round #92 (Div. 2 Only) https://codeforces.com/problemset/problem/124/A
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
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    vector <int> a1, b1;
    while(a<n)
    {
        a1.pb(a);
        a++;
    }
    while(b>=0)
    {
        b1.pb(b);
        b--;
    }
    int count = 0;
    rep(i, 0, a1.size())
    {
        rep(j, 0, b1.size())
        {
            if(a1[i] + b1[j] == n-1)
                count++;
        }
    }

    cout << count;
}