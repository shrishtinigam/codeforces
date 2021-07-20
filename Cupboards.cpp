// Codeforces Round #152 (Div. 2) https://codeforces.com/problemset/problem/248/A
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
    int l = 0;
    int r = 0;
    REP(i,0,n)
    {
        int x,y;
        cin >> x >> y;
        if(x == 1)
            l++;
        if(y == 1)
            r++;
    }
    int ans = 0;
    if(l>n-l)
        ans = ans + n - l;
    else
        ans = ans + l;
    
    if(r>n-r)
        ans = ans + n - r;
    else
        ans = ans + r;
    
    cout << ans;
}

