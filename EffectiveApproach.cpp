// Codeforces Round #140 (Div. 2) https://codeforces.com/problemset/problem/227/B
#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll v = 0; 
    ll p = 0;
    map <int,int> index;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        index[x] = i;
    }
    int qn;
    cin >> qn;
    REP(i, 0, qn)
    {
        int q;
        cin >> q;
        v = v + index[q] + 1;
        p = p + n - index[q];
    }
    
    cout << v << " " << p;
}