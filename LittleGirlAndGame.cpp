// Codeforces Round #169 (Div. 2) https://codeforces.com/problemset/problem/276/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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
    string s;
    cin >> s;
    vector <bool> odd(26, false);
    // if a letter has odd number of occurances then its value will be true(1) 
    // and if it has even number of occurances then its value will be false(0)
    rep(i, 0, s.length())
        odd[s[i]-'a'] = !odd[s[i]-'a']; // switch state from 1 -> 0 or 0 -> 1
    
    int oddcount = count(odd.begin(), odd.end(), true); // count the number of true (1) in the vector of bools

    cout << (oddcount == 0 || oddcount % 2 == 1 ? "First" : "Second") << "\n";
}