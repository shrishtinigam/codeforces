// Codeforces Beta Round #75 (Div. 2 Only) https://codeforces.com/problemset/problem/92/A
// Chips.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <utility>
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
    int n, m; cin >> n >> m;
    int count = 1;
    while(true)
    {
        if(count <= m)
            m -= count;
        else
            break;
        count ++;
        if(count > n)
            count = 1;
    }
    cout << m;
}