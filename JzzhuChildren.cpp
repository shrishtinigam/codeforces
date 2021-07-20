// Codeforces Round #257 (Div. 2) https://codeforces.com/problemset/problem/450/A
#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector <int> c;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        c.push_back(x);
    }
    int nz = 0;
    int pos = 0;
    while(nz != n)
    {
        REP(i, 0, n)
        {
            if(c[i] > m)
                c[i] = c[i] - m;
            else if (c[i] > 0 && c[i] <= m)
            {
                c[i] = 0;
                nz++;
            }
            if(nz == n)
            {
                pos = i; 
                break;
            }
        }
    }
    
    cout << pos + 1;
    
}
