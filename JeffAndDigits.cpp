// Codeforces Round #204 (Div. 2) https://codeforces.com/problemset/problem/352/A
#include <iostream>
#include <ios>
#include <string>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int fives = 0;
    int zeroes = 0;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        if(x == 5)
            fives++;
        else if(x == 0)
            zeroes++;
    }
    if(zeroes <= 0)
    {
        cout << -1;
        return 0;
    }
    else if(fives < 9 && zeroes > 0)
    {
        cout << 0;
        return 0;
    }
    else if(fives >= 9 && zeroes > 0)
    {
        int count = fives/9;
        string ans = "";
        REP(i, 0, count)
        {
            ans = ans + "555555555";
        }
        REP(i, 0, zeroes)
        {
            ans = ans + "0";
        }
        cout << ans;
        return 0;
    }
}