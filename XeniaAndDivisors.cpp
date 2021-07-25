// XeniaAndDivisors.cpp
// Codeforces Round #199 (Div. 2) https://codeforces.com/problemset/problem/342/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>

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
    int n, x, count[8] = {0};
    cin >> n;
    rep(i, 0, n)
    {
        cin >> x;
        count[x]++;
    }
    int a = count[1];
    int b = count[2] + count[3];
    int c = count[4] + count[6];
    if (count[5] == 0 && count[7] == 0 && (count[2] >= count[4]) && a == c && b == c)
    {
        rep(i, 0, count[4])
            cout << "1 2 4\n";
        count[2] -= count[4]; // remaining number 2's
        rep(i, 0, count[2])
            cout << "1 2 6\n";
        rep(i, 0, count[3])
            cout << "1 3 6\n";
    }
    else
        cout << "-1\n";
    return 0;
}