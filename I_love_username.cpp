// Codeforces Round #109 (Div. 2) https://codeforces.com/problemset/problem/155/A
#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int max, min;
    cin >> max;
    min = max;
    int amaze = 0;
    REP(i,1,n)
    {
        int x;
        cin >> x;
        if(x > max)
        {
            amaze++;
            max = x;
        }
        if(x < min)
        {
            amaze++;
            min = x;
        }
    }
    
    cout << amaze;
}

