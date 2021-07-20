// Codeforces Round #101 (Div. 2) https://codeforces.com/problemset/problem/141/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n1, n2, pile;
    cin >> n1 >> n2 >> pile;
    n1 = n1 + n2;
    if(n1.length() != pile.length())
    {
        cout << "NO";
        return 0;
    }
    
    int n1_arr[26] = {0};
    int pile_arr[26] = {0};
    
    REP(i, 0, n1.length())
        n1_arr[tolower(n1[i]) - 97]++;
        
    REP(i, 0, pile.length())
        pile_arr[tolower(pile[i]) - 97]++;
    
    REP(i, 0, 26)
    {
        if(n1_arr[i] != pile_arr[i])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}




