// Codeforces Beta Round #34 (Div. 2) https://codeforces.com/problemset/problem/34/A
#include <iostream>
#include <ios>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> a;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    
    vector <int> d;
    REP(i, 0, n-1)
        d.push_back(abs(a[i] - a[i+1]));
        
    d.push_back(abs(a[0] - a[n-1]));
        
    int min_index = min_element(d.begin(),d.end()) - d.begin();
    
    if(min_index == n-1)
    {
        cout << n << " " << 1;
        return 0;
    }
    cout << min_index+1 << " " << min_index+2;
}
