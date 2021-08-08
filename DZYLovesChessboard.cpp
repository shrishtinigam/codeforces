// Codeforces Round #254 (Div. 2) https://codeforces.com/problemset/problem/445/A
// DZYLovesChessboard.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector <string> q(n);
    rep(i, 0, n)
        cin >> q[i];
    bool flag = 0;
    
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if(q[i][j] == '.')
            {
                if(flag == false)
                {
                    cout << 'B';
                    flag = !flag;
                }
                else if(flag == true)
                {
                    cout << 'W';
                    flag = !flag;
                }
            }
            else
            {
                cout << '-';
                flag = !flag;
            }
        }
        if(m % 2 == 0)
        {
            flag = !flag;
        }
        cout << "\n";
    }
}
