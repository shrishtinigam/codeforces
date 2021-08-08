// Codeforces Round #155 (Div. 2) https://codeforces.com/problemset/problem/254/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
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

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int n;
    cin >> n;
    vector <pair<int,int>> v(2*n);
    rep(i, 0, 2*n)
    {
        cin >> v[i].first;
        v[i].second = i+1;
    }

    sort(v.begin(), v.end());
    vector <int> ans;

    for(int j = 0; j < 2*n-1; j = j + 2)
    {
        if(v[j].first == v[j+1].first)
        {
            ans.pb(v[j].second);
            ans.pb(v[j+1].second);
        }
        else
        {
            cout << -1;
            return 0;
        }
    }
    

    for(int j = 0; j < 2*n-1; j = j + 2)
    {
        cout << ans[j] << " " << ans[j+1] << "\n";
    }
}