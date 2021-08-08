// https://codeforces.com/problemset/problem/260/A
// AddingDigits.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <set>
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
    int a, b, n;
    cin >> a >> b >> n;
    bool flag(false);
    for (int i = 0; i < 10; ++i)
    {
        if ((a * 10 + i) % b == 0)
        {
            cout << a * 10 + i;
            string s(n - 1, '0');
            cout << s << endl;
            flag = true;
            break;
        }
    }
    if (!flag)
    {
        cout << -1 << endl;
    }
    return 0;
}

/* works on smaller limits
ll a, b, n; cin >> a >> b >> n;
    int a1;
    int a2 = a;
    rep(i, 0, n)
    {
        a1 = a;
        a = a*10;
        while(a % b != 0)
        {
            //cout << a << "\n";
            a++;
            if(a % 10 == 9)
            {
                if(a % b != 0)
                {
                    if((a/10) == a2)
                    {
                        cout << -1;
                        return 0;
                    }
                    cout << a1;
                    return 0;
                }
            }
        }
    }
    // cout << "hello";
    cout << a;
*/