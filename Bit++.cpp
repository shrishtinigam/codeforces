// Codeforces Round #173 (Div. 2) https://codeforces.com/problemset/problem/282/A
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
    int ans = 0;
    REP(i,0,n)
    {
        string x;
        cin >> x;
        if(x[0] == '+' || x[1] == '+')
            ans++;
        if(x[0] == '-' || x[1] == '-')
            ans--;    
    }
    cout << ans;
}