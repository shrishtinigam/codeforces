// Codeforces Round #113 (Div. 2) https://codeforces.com/problemset/problem/166/A
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

int k1 = 0;
int k2 = 0;
bool func (pair<int,int> x)
{
    if(x.first == k1)
        return true;
    return false;
}
bool func2 (pair<int,int> x)
{
    if(x.second == k2)
        return true;
    return false;
}
bool func3(const pair<int,int> &a,
                   const pair<int,int> &b)
{
       return a.second<b.second;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k; cin >> n >> k;
    vector <pair<int,int>> v(n);
    rep(i, 0, n)
        cin >> v[i].first >> v[i].second;

    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());

    k1 = v[k-1].first;
    
    // count the number of occurances of k1 problems solved
    int c1 = count_if(v.begin(), v.end(), func);
    if(c1 == 1)
    {
        cout << 1;
        return 0;
    }
    // the first occurance of k1 problems solved
    vector<pair<int,int>>::iterator it1 = find_if(v.begin(), v.end(), func);
    sort(it1, it1+c1, func3);
    k2 = v[k-1].second;
    int c2 = count_if(it1, it1+c1, func2);
    cout << c2;
}

//rep(i, 0, n)
        //cout << i + 1 << " " << v[i].first << " " << v[i].second << "\n";
//cout << "k1 = " << k1 << " k2 = " << k2 << "\n";