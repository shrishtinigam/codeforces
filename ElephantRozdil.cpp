// Codeforces Round #129 (Div. 2) https://codeforces.com/problemset/problem/205/A
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
    vector <int> d;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        d.push_back(x);
    }
    vector<int>::iterator it;
    int min_i= min_element(d.begin(),d.end()) - d.begin();
    int min1 = d[min_i];
    int count1 = count(d.begin(), d.end(), min1);
    if(count1 > 1)
        cout << "Still Rozdil";
    else
        cout << min_i + 1;
}