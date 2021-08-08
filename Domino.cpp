// Codeforces Round #205 (Div. 2) https://codeforces.com/problemset/problem/353/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
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
    int n;
    cin >> n;
    int sum1(0), sum2(0);
    int ee(0), oo(0), eo(0), oe(0);
    rep(i, 0, n)
    {
        int x,y; 
        cin >> x;
        sum1 = sum1 + x;
        cin >> y;
        sum2 = sum2 + y;
        if(x % 2 == 0 && y % 2 == 0)
            ee++;
        else if(x % 2 != 0 && y % 2 != 0)
            oo++;
        else if(x % 2 != 0 && y % 2 == 0)
            oe++;
        else if(x % 2 == 0 && y % 2 != 0)
            eo++;
    }
    // cout << sum1 << " " << sum2 << "\n";
    if(sum1 % 2 == 0 && sum2 % 2 == 0)
    {
        cout << 0;
        return 0;
    }
    else if(sum1 % 2 != 0 && sum2 % 2 != 0)
    {
        if(oe > 0 || eo > 0)
        {
            cout << 1;
            return 0;
        }  
        else
        {
            cout << -1;
            return 0;
        }  
    }
    cout << -1;
    return 0;  
}