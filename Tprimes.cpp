// Codeforces Round #142 (Div. 2) https://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

bool isPrime(ll n)
{
    if (n <= 1)
        return false;
 
    for (ll i = 2; i <= floor(sqrt(n)); i++)
        if (n % i == 0)
            return false;
    return true;
}
set <ll> s;
void Prime(ll n)
{
    for (ll i = 2; i < n; i++) 
    {
        if (isPrime(i))
            s.insert(i*i);
    }
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n = 1000001;
    Prime(n);
    int n1; cin >> n1;
    rep(i, 0, n1)
    {
        ll x; cin >> x;
        if(s.find(x) != s.end())
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}