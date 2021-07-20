// Codeforces Round #141 (Div. 2) https://codeforces.com/problemset/problem/228/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    set <int> shoes;
    REP(i,0,4)
    {
        int x;
        cin >> x;
        shoes.insert(x);
    }
    cout << 4-(shoes.size());
}




