// ShooshunsAndSequence.cpp
// Codeforces Round #137 (Div. 2) https://codeforces.com/problemset/problem/222/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set> 
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
    int n, k;
    cin >> n >> k;
    int a, last(0), cont(1);
    rep(i, 0, n)
    {
        cin >> a;
        if(a == last)
            cont++;
        else
            cont = 1;
        last = a;
    }
    cout << ((cont + k) > n ? n - cont : -1);
}