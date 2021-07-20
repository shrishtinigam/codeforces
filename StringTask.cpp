// Codeforces Beta Round #89 (Div. 2) https://codeforces.com/problemset/problem/118/A
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
    transform(x.begin(), x.end(), x.begin(), ::tolower);
    string ans = "";
    REP(i, 0, x.length())
    {
        if((x[i]) == 'a' || (x[i]) == 'e' || (x[i]) == 'i' || (x[i]) == 'o' || (x[i]) == 'u' || (x[i]) == 'y')
        {
            continue;
        }
        else
        {
            ans = ans + "." + x[i];
        }
    }
    
    cout << ans;
}

