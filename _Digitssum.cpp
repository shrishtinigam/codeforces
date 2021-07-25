// Digitssum.cpp - incomplete
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string> 
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

bool func(ll x)
{
    string s = to_string(x);
        int sum1(0), sum2(0);
        rep(i, 0, s.length())
        {
            char a = s[i];
            int a1 = a -'0';
            sum1 += a1; 
        }
        x++;
        s = to_string(x);
        rep(i, 0, s.length())
        {
            char a = s[i];
            int a1 = a -'0';
            sum2 += a1; 
        }
        if(sum1 > sum2)
        {
            return true;
        }
        return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while(n--)
    {
        ll x;
        cin >> x;
        int c = 0; // count
        rep(i, 1, x+1)
        {
            if(func(i) == true)
                c++;
        }
        cout << c << "\n";
    }
}