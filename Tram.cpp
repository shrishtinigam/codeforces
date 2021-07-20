// Codeforces Beta Round #87 (Div. 2 Only) https://codeforces.com/problemset/problem/116/A
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
    int max = 0;
    int current = 0;
    REP(i,0,n)
    {
        int leave,enter;
        cin >> leave >> enter;
        current = current + enter - leave;
        if(current > max)
            max = current;
    }
    
    cout << max;
}

