// Codeforces Beta Round #91 (Div. 2 Only) https://codeforces.com/problemset/problem/122/A
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
    int n;
    cin >> n;
    // generate a list of lucky numbers less than 1000
    // check for divisibilty against all of them
    int arr[] = {4, 7, 47, 74, 444, 777, 447, 477, 774, 744, 747, 474};
    REP(i,0,10)
    {
        if(n % arr[i] == 0)
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
}

