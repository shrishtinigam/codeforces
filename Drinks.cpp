// Codeforces Round #126 (Div. 2) https://codeforces.com/problemset/problem/200/B
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin >> n;
    double sum = 0;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        sum = sum + x;
    }
    
    double ans = sum/n;
    cout << ans;
}
