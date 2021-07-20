// Codeforces Round #132 (Div. 2) https://codeforces.com/problemset/problem/215/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <numeric> 
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a(0), b(0);
    vector <pair<int,int>> pairs;
    while(a*a <= n)
    {
        pairs.pb(mp(a,(n-(a*a))));
        a++;
    }
    int ans = 0;
    rep(i, 0, pairs.size())
    {
        if((pairs[i].first) + ((pairs[i].second)*(pairs[i].second)) == m)
            ans++;
    }
 
    cout << ans;
}