// https://codeforces.com/problemset/problem/263/A Codeforces Round #161 (Div. 2)
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
    int x, y, n;
    REP(i, 0, 5)
    {
        REP(j, 0, 5)
        {
            x = i;
            y = j;
            cin >> n;
            if(n != 0)
            {
                cout << abs(x-2) + abs(y-2);
                // return 0;
            }
        }
    }
}

