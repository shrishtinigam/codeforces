// Codeforces Round #194 (Div. 2) https://codeforces.com/problemset/problem/334/A
// CandyBags.cpp
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
    int count = 0;
    rep(i, 0, ((n*n) / 2))
    {
        cout << (i + 1) << " " << (n*n) - i << " ";
        count++;
        count++;
        if(count == n)
        {
            cout << "\n";
            count = 0;
        }
    }
}