// Codeforces Round #148 (Div. 2) https://codeforces.com/problemset/problem/239/A
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
    ll y, k, n;
    cin >> y >> k >> n;
    ll xy = k;
    int flag = 0;
    while(xy <= n)
    {
        if(xy > y)
        {
            cout << (xy - y) << " ";
            flag = 1;
        }
        xy += k;
    }
    if(flag == 0)
        cout << -1;
}