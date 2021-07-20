// Codeforces Round #727 (Div. 2) https://codeforces.com/problemset/problem/1539/A
#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;

    while(T--)
    {
       ll n, x, t;
       cin >> n >> x >> t;
       ll z = t/x;
       if(z>n)
       {
           cout << (n*(n-1))/2 << "\n";
       }
       else
       {
           cout << n*z - ((z*(z+1))/2) << "\n";
       }
    }
}