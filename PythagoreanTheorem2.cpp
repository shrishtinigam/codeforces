// Codeforces Round #183 (Div. 2) https://codeforces.com/problemset/problem/304/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
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
    int count = 0;
    ll temp;
    rep(i, 1, n)
    {
        for(int j = i; (i*i) + (j*j) <= (n*n); j++)
        {
            temp = i*i + j*j;
            if(int(sqrt(temp)) == sqrt(temp))
                count++;
        }
    }
    cout << count;
}

/* CORRECT ANSWER THAT DIDN'T PASS THE TIME LIMIT
int n;
    cin >> n;
    vector <int> v;
    rep(i, 1, n + 1)
        v.pb(i*i);
    int count = 0;
    rep(i, 0, n)
    {
        rep(j, i, n)
        {
            int k = v[i]+v[j];
            if(find(v.begin(), v.end(), k) != v.end())
                count++;
        }
    }
    cout << count;
*/