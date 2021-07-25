// Codeforces Beta Round #42 (Div. 2) https://codeforces.com/problemset/problem/43/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
     
    vector<int> up(26);
    vector<int> down(26);

    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    
    rep(i,0,s1.length())
    {
        int c = int(s1[i]);
        if(c>=65 && c<=90)
        {
            up[c-65]++;
        }        
        else if(c>=97 && c<=122)
        {
            down[c-97]++;
        }
        else{
            continue;
        }
    }

    rep(i,0,s2.length())
    {
        int c = int(s2[i]);
        if(c>=65 && c<=90)
        {
            if(up[c-65]>0)
            {
                up[c-65]--;
            }
            else
            {
                cout<<"NO"; return 0;
            }
        }        
        else if(c>=97 && c<=122)
        {
            if(down[c-97]>0)
            {
                down[c-97]--;
            }
            else
            {
                cout<<"NO"; return 0;
            }
        }
        else{
            continue;
        }
    }
    cout<<"YES";
    
    return 0;
}