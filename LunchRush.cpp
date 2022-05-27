// Codeforces Round #169 (Div. 2)
// https://codeforces.com/problemset/problem/276/A

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
#include <map>
#include <climits>
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
    int n, k, f, t, j, max_j(INT_MIN);
    cin >> n >> k;

    while(n--)
    {
        cin >> f >> t;
        if(t <= k)
            j = f;
        else
            j = f - t + k;
        if(j > max_j)
            max_j = j;
    }
    cout << max_j;
}