// Codeforces Round #731 (Div. 3) https://codeforces.com/contest/1547/problem/A
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    REP(i,0,n)
    {
        int ax, ay, bx, by, fx, fy;
        int ans = 0;
        cin >> ax >> ay >> bx >> by >> fx >> fy;
        if(ax == bx && bx == fx && ((fy > ay && fy < by)||(fy < ay && fy > by)))
            ans = abs(ay - by) + 2;
        else if(ay == by && by == fy && ((fx > ax && fx < bx)||(fx < ax && fx > bx)))
            ans = abs(ax - bx) + 2;
        else
            ans = abs(ax-bx)+abs(ay-by);
        cout << ans << "\n";
    }
}

