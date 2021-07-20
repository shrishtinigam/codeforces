// Codeforces Round #197 (Div. 2) https://codeforces.com/problemset/problem/339/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a;
    cin >> a;
    vector<char> list1;
    REP(i, 0, a.length())
    {
        if(isdigit(a[i]) == true)
            list1.push_back(a[i]);
    }
    sort(list1.begin(), list1.end());
    cout << list1[0];
    REP(i, 1, list1.size())
    {
        cout << "+" << list1[i];
    }
}

