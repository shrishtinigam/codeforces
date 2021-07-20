// Codeforces Beta Round #32 (Div. 2, Codeforces format) https://codeforces.com/problemset/problem/32/B
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string code;
    cin >> code;
    
    REP(i, 0, code.length())
    {
        if(code[i] == '.' )
        {
            cout << '0';
        }
        if(code[i] == '-' && i+1 < code.length())
        {
            if(code[i+1] == '.')
            {
                cout << '1';
                i++;
            }
        }
        if(code[i] == '-' && i+1 < code.length())
        {
            if(code[i+1] == '-')
            {
                cout << '2';
                i++;
            }
        }
    }
}



