// Codeforces Round #118 (Div. 2) http://codeforces.com/problemset/problem/186/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    int count = 0;
    char a1, a2, b1, b2;
    if(s1.length() != s2.length())
    {
        cout << "NO";
        return 0;
    }
    rep(i, 0, s1.length())
    {
        if(s1[i] == s2[i])
            continue;
        else
        {
            count++;
            if(count > 2)
            {
                cout << "NO";
                return 0;
            }
            if(count == 1)
            {
                a1 = s1[i];
                b1 = s2[i];
            }
            if(count == 2)
            {
                a2 = s1[i];
                b2 = s2[i];
            }
        }
    }
    if(a1 == b2 && a2 == b1)
    {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
    
}