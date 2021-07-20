// Codeforces Round #196 (Div. 2) https://codeforces.com/problemset/problem/337/A
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
    int a = 0;
    int b = n-1;
    int min = 10000;
    while(b != m)
    {
        if(q[b] - q[a] < min)
            min = q[b] - q[a];
        a++;
        b++;
    }
    cout << min;
}