// Codeforces Beta Round #79 (Div. 2 Only) https://codeforces.com/problemset/problem/102/B
// SumOfDigits.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define rep2(i, a, b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x; cin >> x;
    int sum(0), ans(1);
    if(x.length() == 1)
    {
        cout << 0;
        return 0;
    }
    rep(i, 0, x.length())
    {
        sum += int(x[i]) - int('0');
    }
    while(sum > 9)
    {
        x = to_string(sum);
        sum = 0;
        rep(i, 0, x.length())
        {
            sum += int(x[i]) - int('0');
        }
        ans++;
    }
    cout << ans;
}