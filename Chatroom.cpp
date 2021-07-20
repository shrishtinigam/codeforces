// Codeforces Beta Round #54 (Div. 2) https://codeforces.com/problemset/problem/58/A
#include <iostream>
#include <ios>
#include <string>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
// Basically finding a subsequence in a string
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    string h = "hello";
    int j = 0;
    int n = s.length();
    int m = h.length();
    // https://www.geeksforgeeks.org/given-two-strings-find-first-string-subsequence-second/
    for(int i = 0; i < n && j < m; i++)
    {
        if(h[j] == s[i])
            j++;
    }
    if(j == m)
        cout << "YES";
    else
        cout << "NO";
}

