// Codeforces Round #112 (Div. 2) https://codeforces.com/problemset/problem/165/A
#include <iostream>
#include <ios>
#include <vector>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int scp = 0;
    
    vector<pair<int,int>> p;
    
    REP(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        p.push_back(make_pair(x,y));
    }
    
    REP(i, 0, n)
    {
        int f1(0), f2(0), f3(0), f4(0);
        REP(j, 0, n)
        {
            if(i != j)
            {
                if(p[i].first > p[j].first && p[i].second == p[j].second)
                {
                    f1 = 1;
                }
                else if(p[i].first < p[j].first && p[i].second == p[j].second)
                {
                    f2 = 1;
                }
                else if(p[i].first == p[j].first && p[i].second < p[j].second)
                {
                    f3 = 1;
                }
                else if(p[i].first == p[j].first && p[i].second > p[j].second)
                {
                    f4 = 1;
                }
                
                if(f1 == 1 && f2 == 1 && f3 == 1 && f4 == 1)
                {
                    scp++;
                    break;
                }
            }
        }
    }
    
    cout << scp;
}