// Codeforces Beta Round #67 (Div. 2) https://codeforces.com/problemset/problem/75/A
// LifeWithoutZeroes.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
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
    int x1, x2; cin >> x1 >> x2;
    string s1, s2;
    s1 = to_string(x1);
    s2 = to_string(x2);
    int sum = x1 + x2;
    string sum1 = to_string(sum);
    string s3(""), s4(""), s5("");
    rep(i, 0, s1.length())
    {
        if(s1[i] != '0')
            s3 += s1[i];
    }
    rep(i, 0, s2.length())
    {
        if(s2[i] != '0')
            s4 += s2[i];
    }
    rep(i, 0, sum1.length())
    {
        if(sum1[i] != '0')
            s5 += sum1[i];
    }
    if(stoi(s5) == stoi(s3) + stoi(s4))
    {
        cout << "YES";
        return 0;
    }
    // cout << s5 << " " << s3 << " " << s4 << " ";
    cout << "NO";
}