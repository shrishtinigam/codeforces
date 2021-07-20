// Codeforces Beta Round #42 (Div. 2) https://codeforces.com/problemset/problem/43/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define PB push_back
#define MP make_pair
string glo;
bool func(pair <string,int> y)
{
    if(y.first == glo)
        return true;
    return false;
}
bool comp( pair <string,int> y, pair <string,int> z)
{
    return (y.second < z.second);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    vector <pair<string,int>> names;
    REP(i, 0, T)
    {
        string x;
        cin >> x;
        glo = x;
        if(find_if(names.begin(), names.end(), func) == names.end())
        {
            names.PB(MP(x,1));
        }
        else
        {
            int m;
            m = find_if(names.begin(), names.end(), func) - names.begin();
            names[m].second++;
        }
    }
    int max = max_element(names.begin(), names.end(), comp) - names.begin();
    cout << names[max].first << "\n";
}

