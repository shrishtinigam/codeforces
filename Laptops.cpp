// Codeforces Round #260 (Div. 2) https://codeforces.com/problemset/problem/456/A

#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <map>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

bool happy_alex(vector<int> v1, vector<int> v2)
{
    if(v1[0] < v2[0] && v1[1] > v2[1])
        return true;
    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <vector<int>> laptops(n);
    rep(i,0,n)
    {
        vector <int> laptop(2);
        cin >> laptop[0];
        cin >> laptop[1];
        laptops[i] = laptop;
    }
    sort(laptops.begin(), laptops.end(), greater <>());
    stack <vector<int>> s;
    s.push(laptops[0]);
    rep(i,1,n)
    {
        if(happy_alex(laptops[i],s.top()))
        {
            cout << "Happy Alex";
            return 0;
        }
        s.push(laptops[i]);
    }
    cout << "Poor Alex";
}