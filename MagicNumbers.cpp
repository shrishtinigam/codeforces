// Codeforces Round #189 (Div. 2) https://codeforces.com/problemset/problem/320/A
#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    int flag = 0;
    REP(i, 0, x.length())
    {   
        if(i+2 < x.length() && x[i] == '1' && x[i+1] == '4' && x[i+2] == '4')
        {
            flag++;
            i = i + 2;
        }
        else if(i+1 < x.length() && x[i] == '1' && x[i+1] == '4')
        {
            flag++;
            i = i + 1;
        }
        else if(x[i] == '1')
            flag++;
        else
        {
            cout << "NO";
            return 0;
        }
    }
    if(flag >= 1)
        cout << "YES";
    else
        cout << "NO";
    
}