// Codeforces Beta Round #63 (Div. 2) https://codeforces.com/problemset/problem/69/A
#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

struct point{
    int x;
    int y;
    int z;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    point points[n];
    
    REP(i, 0, n)
        cin >> points[i].x >> points[i].y >> points[i].z;
    
    int xsum = 0;
    int ysum = 0;
    int zsum = 0;
    
    REP(i, 0, n)
    {
        xsum += points[i].x;
        ysum += points[i].y;
        zsum += points[i].z;
    }
    
    if(xsum == 0 && ysum == 0 && zsum == 0)
        cout << "YES";
    else
        cout << "NO";
}