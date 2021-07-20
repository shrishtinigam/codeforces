// Codeforces Round #134 (Div. 2) https://codeforces.com/problemset/problem/218/B
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
    int n, m;
    cin >> n >> m;
    vector <int> q;
    rep(i, 0, m)
    {
        int x;
        cin >> x;
        q.pb(x);
    }
    sort(q.begin(),q.end());
    int min(0), num(q[0]), k(0);
    rep(i, 0, n)
    {
        min += num;
        num--;
        if(num == 0)
            num = q[++k];
    }
    sort(q.begin(),q.end(), greater <int> ());
    int max(0);
    while(n--)
    {
        max += q[0];
        q[0]--;
        rep(i, 1, m)
        {
            if(q[i] <= q[i-1])
                break;
            swap(q[i],q[i-1]);
        }
    }
    cout << max << " " << min;
}