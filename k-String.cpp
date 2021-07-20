// Codeforces Round #135 (Div. 2) https://codeforces.com/problemset/problem/219/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define ll long long
#define pb push_back
#define mp make_pair
char glo;
bool func(pair <char,int> y)
{
    if(y.first == glo)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector <pair<char,int>> names;
    rep(i, 0, str.length())
    {
        char x;
        x = str[i];
        glo = x;
        if(find_if(names.begin(), names.end(), func) == names.end())
        {
            names.pb(mp(x,1));
        }
        else
        {
            int m;
            m = find_if(names.begin(), names.end(), func) - names.begin();
            names[m].second++;
        }
    }
    /*
    rep(i, 0, names.size())
    {
        cout << names[i].first << " " << names[i].second << "\n";
    }*/
    int count = 0;
    string ans = "";
    rep(i, 0, names.size())
    {
        if(names[i].second % n != 0)
        {
            cout << -1;
            return 0;
        }
        rep(j, 0, (names[i].second/n))  
        {
            ans = ans + names[i].first;
        }      
    }
    string ans2 = "";
    rep(i, 0, n)
    {
        ans2 = ans2 + ans;
    }

    cout << ans2;
    
}