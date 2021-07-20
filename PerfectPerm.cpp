// Codeforces Round #144 (Div. 2) https://codeforces.com/problemset/problem/233/A
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    if(n % 2 != 0)
    {
        cout << "-1";
        return 0;
    }
    else
    {
        REP(i,1,n+1)
        {
            cout << i + 1 << " ";
            cout << i << " ";
            i++;
        }
    }
}
