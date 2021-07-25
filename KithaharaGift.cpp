// KithaharaGift.cpp
// Codeforces Round #248 (Div. 2) https://codeforces.com/problemset/problem/433/A
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
    int n;
    cin >> n;
    int a(0), b(0);

    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if(x==100)
            a++;
        else
            b++;
    }

    if((a % 2 != 0) || ((a*100) + (b*200))%100 != 0 || n == 1)
    {
        cout << "NO";
        return 0;
    }
    if(a == 0 && (b % 2 != 0))
    {
        cout << "NO";
        return 0;
    }
    cout << "YES";
    return 0;
}
