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
    vector <int> price;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if(x < 0)
            price.pb(x*(-1));
    }
    if(price.size() == 0)
    {
        cout << 0;
        return 0;
    }
    sort(price.begin(), price.end(), greater<int>());
    int c = 0;
    if(m > price.size())
        c = price.size();
    else
        c = m;
    cout << accumulate(price.begin(),price.begin() + c, 0);
}