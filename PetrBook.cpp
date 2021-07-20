// Codeforces Beta Round #99 (Div. 2) https://codeforces.com/problemset/problem/139/A
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
    int n;
    cin >> n;
    vector <int> w;
    REP(i, 0, 7)
    {
        int x;
        cin >> x;
        w.push_back(x);
    }
    int t = 0;
    int i = 0;
    while(t < n)
    {
        if(i>6)
            i = 0;
        t = w[i] + t;
        i++;
    }
    
    cout << i;
}