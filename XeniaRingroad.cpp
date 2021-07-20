// Codeforces Round #197 (Div. 2) https://codeforces.com/problemset/problem/339/B
#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t >> n;
    vector <ll> v;
    REP(i, 0, n)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    ll total = 0;
    ll pos = 1;
    ll j = 0;
    while(j < n)
    {
        if(v[j] > pos)
        {
            total = total + (v[j] - pos);
            pos = v[j];
        }
        else if(v[j] < pos)
        {
            total = total + (v[j] + t - pos);
            pos = v[j];
        }
        j++;
    }
    
    cout << total;
    
}