// Codeforces Round #142 (Div. 2) https://codeforces.com/problemset/problem/230/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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
    int s, n;
    cin >> s >> n;
    vector <pair<int,int>> v;
    rep(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    sort(v.begin(), v.end());
    rep(i, 0, n)
    {
        if(v[i].first >= s)
        {
            cout << "NO";
            return 0;
        }
        s = s + v[i].second;
    }
    cout << "YES";
}