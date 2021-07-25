// Codeforces Beta Round #42 (Div. 2) https://codeforces.com/problemset/problem/43/B
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
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map <char, int> map1;
    rep(i, 0, s1.length())
    {
        char x = s1[i];
        if(x != ' ')
        {
            if(map1.find(x) == map1.end())
                map1.insert(pair<char, int>(x, 1));
            else
                map1[x]++;
        }
    }
    rep(i, 0, s2.length())
    {
        char x = s2[i];
        if(x != ' ')
        {
            if(map1.find(x) == map1.end())
            {
                cout << "NO";
                return 0;
            }
            else if(map1[x] > 0)
                map1[x]--;
            else if(map1[x] <= 0)
            {
                cout << "NO";
                return 0;
            }
        }
    }

    cout << "YES";
    return 0;
}

 /*
    map<char, int>::iterator itr;
    for (itr = map1.begin(); itr != map1.end(); ++itr) 
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
*/