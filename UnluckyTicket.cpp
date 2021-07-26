// Codeforces Round #111 (Div. 2) https://codeforces.com/problemset/problem/160/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
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
    int n;
    cin >> n;
    string v;
    cin >> v;
    vector <int> v1, v2;
    rep(i, 0, n)
    {
        v1.pb((int)(v[i]));
        v2.pb((int)(v[i+n]));
    }
    
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    int flag = 0;
    int flag2;
    if(v1[0] > v2[0])
        flag = 1;
    if(v1[0] == v2[0])
    {
        cout << "NO";
        return 0;
    }
    rep(i, 0, n)
    {
        if(v1[i] > v2[i])
            flag2 = 1;
        else
            flag2 = 0;
        if(flag != flag2 || v1[i] == v2[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}