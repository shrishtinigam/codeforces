// Codeforces Round #203 (Div. 2) https://codeforces.com/problemset/problem/350/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
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
    int n, m;
    cin >> n >> m;
    vector <int> nv(n);
    vector <int> mv(m);
    rep(i, 0, n)
        cin >> nv[i];
    rep(i, 0, m)
        cin >> mv[i];
    sort(nv.begin(), nv.end());
    sort(mv.begin(), mv.end());

    if(nv[n-1] >= mv[0])
    {
        cout << -1;
        return 0;
    }
    if(n == 1 && (mv[0] > (2*nv[0])))
    {
        cout << 2*(nv[0]);
        return 0;
    }
    if(n == 1 && (mv[0] <= (2*nv[0])))
    {
        cout << -1;
        return 0;
    }
    int ans = 0;
    if(nv[n-1] > 2*nv[0])
    {
        cout << nv[n-1];
        return 0;
    }
    rep(i, 0, n)
    {
        if(nv[i]*2 >= nv[n-1] && nv[i]*2 < mv[0])
        {
            ans = nv[i] * 2;
            break;
        }
    }
    if(ans != 0)
        cout << ans;
    else
        cout << -1;
}