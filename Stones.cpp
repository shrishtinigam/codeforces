// Codeforces Round #163 (Div. 2) https://codeforces.com/problemset/problem/266/A
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
    string x;
    cin >> x;
    int ans = 0;
    int i = 0;
    while(i!=x.length())
    {
        if(x[i] == x[i+1])
        {
            ans++;
            string y = "";
            REP(j,0,x.length())
            {
                if(j != i+1)
                    y = y + x[j];
            }
            x = y;
        }
        else
            i++;
    }
    
    cout << ans;
}