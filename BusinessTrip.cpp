// Codeforces Round #106 (Div. 2) https://codeforces.com/problemset/problem/149/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> growth;
    rep(i, 0, 12)
    {
        int x;
        cin >> x;
        growth.pb(x);
    }
    sort(growth.begin(), growth.end(), greater<int>());
    int ans = 0;
    int count = 0;
    while(ans < n)
    {
        ans = ans + growth[count];
        count++;
        if(count > 12)
        {
            cout << -1;
            return 0;
        }
    }
    cout << count;
}