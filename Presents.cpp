// Codeforces Beta Round #97 (Div. 2) https://codeforces.com/problemset/problem/136/A
#include <iostream>
#include <ios>
#include <string>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> received;
    vector <int> given;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        received.push_back(x);
        given.push_back(0);
    }
    REP(i, 0, n)
    {
        given[(received[i]-1)] = i+1;
    }
    for (int i = 0; i < given.size(); i++) {
        cout << given[i] << " ";
    }
}

