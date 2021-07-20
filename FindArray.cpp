// Educational Codeforces Round 111 (Rated for Div. 2) https://codeforces.com/contest/1550/problem/0
#include <iostream>
#include <ios>
#include <map>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        int sq = 0;
        int k = 1;
        while(x > sq)
        {
            sq = k*k;
            k++;
        }
        k = k - 1;
        cout << k << "\n";
    }
}

