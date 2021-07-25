// Codeforces Round #247 (Div. 2) https://codeforces.com/problemset/problem/431/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set> 
#include <iterator>
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
    int g[5][5];
    rep(i, 0, 5)
    {
        rep(j, 0, 5)
            cin >> g[i][j];
    }
    int p[5];
    rep(i, 0, 5)
        p[i] = i;
    int ans = 0;
    do
    {
        int sum = 0;
        sum = g[p[0]][p[1]] + g[p[1]][p[0]] + g[p[1]][p[2]] + g[p[2]][p[1]] + ((g[p[2]][p[3]] + g[p[3]][p[2]])*2) + ((g[p[3]][p[4]] + g[p[4]][p[3]])*2);
        if(sum > ans)
            ans = sum;
    } while(next_permutation(p, p+5));
    
    cout << ans << "\n";
}