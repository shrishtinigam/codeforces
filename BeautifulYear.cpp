// Codeforces Round #166 (Div. 2) https://codeforces.com/problemset/problem/271/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

bool distinct(int);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    n = n + 1;
    while(distinct(n) != true)
        n++;
        
    cout << n;
}

bool distinct(int n)
{
    string x = to_string(n);
    REP(i, 0, x.length())
    {
        REP(j,0,x.length())
        {
            if(i != j)
            {
                if(x[i] == x[j])
                {
                    return false;
                }
            }
        }
    }
    
    return true;
}


