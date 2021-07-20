// Codeforces Round #146 (Div. 2) https://codeforces.com/problemset/problem/236/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <set>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string name;
    cin >> name;
    
    set <int> uniques;
    REP(i,0,name.length())
        uniques.insert(name[i]);
        
    if(uniques.size() % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
}




