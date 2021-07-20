// Codeforces Round #164 (Div. 2) https://codeforces.com/problemset/problem/268/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <pair<int, int>> colors;
    REP(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        colors.push_back(make_pair(x,y));
    }
    int ans = 0;
    REP(i, 0, n)
    {
        REP(j, 0, n)
        {
            if(i != j)
            {
                // i  is the home team 
                int home = colors[i].first;
                int guest = colors[j].second;
                if(home == guest)
                {
                    ans++;
                }
            }
        }  
    }
    
    cout << ans;
    
}

