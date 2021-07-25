// Codeforces Round #180 (Div. 2) https://codeforces.com/problemset/problem/298/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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
    ll n, s1, s2, e1, e2;
    cin >> n >> s1 >> s2 >> e1 >> e2;
    int t = 0;
    rep(i, 0, n)
    {
        if(s1 == e1 && s2 == e2)
            break;
        char x;
        cin >> x;
        if(x == 'S')
        {
            if(e2 < s2)
                s2--;
        }
        else if(x == 'W')
        {
            if(e1 < s1)
                s1--;
        }
        else if(x == 'E')
        {
            if(e1 > s1)
                s1++;
        }
        else if(x == 'N')
        {
            if(e2 > s2)
                s2++;
        }
        t++;
    }
    if(s1 == e1 && s2 == e2)
    {
        cout << t;
        return 0;
    }
    cout << -1;
}