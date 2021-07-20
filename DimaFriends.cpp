// Codeforces Round #167 (Div. 2) https://codeforces.com/problemset/problem/272/A
#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int total = 0;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        total = total + x;
    }
    int ans = 0;
    REP(i, 1, 6)
    {
        if((total + i) % (n+1) != 1)
            ans++;
    }
    
    cout << ans;
}