// Codeforces Round #143 (Div. 2) https://codeforces.com/problemset/problem/231/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int flag = 0;
    int ans = 0;
    REP(i,0,n)
    {
        int x, y, z;
        cin >> x >> y >> z;
        flag = x + y + z;
        if(flag >= 2)
            ans++;
    }
    
    cout << ans;
}




