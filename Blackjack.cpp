// Codeforces Beta Round #80 (Div. 2 Only) https://codeforces.com/problemset/problem/104/A
// Blackjack.cpp
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
    int n; cin >> n;
    if(n <= 10)
        cout << 0;
    else if(n <= 19)
        cout << 4;
    else if(n == 20)
        cout << 15;
    else if(n == 21)
        cout << 4;
    else
        cout << 0;
}