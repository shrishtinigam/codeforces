// Codeforces Round #211 (Div. 2) https://codeforces.com/problemset/problem/363/B
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
    int n, k;
    cin >> n >> k;
    vector <int> v(n);
    
    rep(i, 0, n)
        cin >> v[i];
    ll sum;
    rep(i, 0, k)
        sum += v[i];
    ll minn(sum);
    int minpos(0);
    for(int i = 1; i+k-1 < n; i++)
    {
        // simulatneously add a new one, and subtract the last one
        sum -= v[i-1];
        sum += v[i+k-1];
        if(sum < minn)
        {
            minpos = i;
            minn = sum;
        }
    }
    cout << minpos + 1;
}