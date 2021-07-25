// YaroslavandPermutations.cpp
// Codeforces Round #179 (Div. 2) https://codeforces.com/problemset/problem/296/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
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
    int n;
    cin >> n;
    map <int, int> map1;
    rep(i, 0, n)
    {
        int x;
        cin >> x;
        if(map1.find(x) == map1.end())
            map1.insert(pair<int, int>(x, 1));
        else
        {
            map1[x]++;
            if(n % 2 == 0)
            {
                if(map1[x] >= ((n/2) + 1))
                {
                    cout << "NO";
                    return 0;
                }
            }
            else
            {
                if(map1[x] > ((n/2) + 1))
                {
                    cout << "NO";
                    return 0;
                }
            }
            
        }
    }
    cout << "YES";
}