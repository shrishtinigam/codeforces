// Codeforces Round #130 (Div. 2) https://codeforces.com/problemset/problem/208/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    string y = "WUB";
    int found = x.find(y);
    while(found != string::npos)
    {
        x[found] = '0';
        x[found + 1] = '0';
        x[found + 2] = '0';
        found = x.find(y, found + 1);
    }
    int flag = 0;
    string ans = "";
    REP(i, 0, x.length())
    {
        if(x[i] != '0')
        {
            if(flag == 1)
            {
                ans = ans + ' ' + x[i];
                flag = 0;
            }
            else
            {
                ans = ans + x[i];
            }
        }
        else if(x[i] == '0')
        {
            flag = 1;
        }
    }
    if(ans[0] == ' ')
    {
        REP(i, 1, ans.length())
            cout << ans[i];
    }
    else
    {
        cout << ans;
    }
    
}