// Codeforces Beta Round #84 (Div. 2 Only) https://codeforces.com/problemset/problem/110/A
#include <iostream>
#include <ios>
#include <string>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string x;
    cin >> x;
    int n = 0;
    REP(i, 0, x.length())
    {
        if(x[i] == '4' || x[i] == '7')
            n++;
    }
    int arr[] = {4, 7, 47, 74};
    REP(i,0,4)
    {
        if(n == arr[i])
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}