// Codeforces Round #258 (Div. 2) https://codeforces.com/problemset/problem/451/B
// SortTheArray.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>
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
    int n; cin >> n;
    vector <int> v, v1;
    rep(i, 0, n)
    {
        int x; cin >> x;
        v.pb(x); v1.pb(x);
    }
    sort(v1.begin(), v1.end());
    if(v == v1)
    {
        cout << "yes\n1 1";
        return 0;
    }
    int flag(0), i(0), l , r;
    while(flag == 0)
    {
        if(v[i] < v[i+1])
            i++;
        else
        {
            l = i;
            r = i;
            while(v[i] >= v[i+1] && i < (n - 1))
            {
                i++; r++;
            }
            reverse(v.begin()+l, v.begin() + r + 1);
            flag = 1;
        }
        
    }
    if(v == v1)
        cout << "yes\n" << l + 1 << " " << r + 1;
    else
        cout << "no";
}

//rep(i, 0, n)
        //cout << v[i] << " ";
    //cout << "\n";
    //rep(i, 0, n)
        //cout << v1[i] << " ";