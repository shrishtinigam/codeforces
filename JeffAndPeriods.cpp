// Codeforces Round #204 (Div. 2) https://codeforces.com/problemset/problem/352/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
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
    int n, x;
    cin >> n;
    map<ll,vector<ll>> mp;
    // making a map containing the number as key and a vector of its positions as value
    rep(i, 0, n)
    {
        cin >> x;
        mp[x].pb(i);
    }
    vector<pair<ll,ll>> v; // array containing the results -> first = number, second = difference

    map <ll, vector <ll>> :: iterator p = mp.begin();
    while(p != mp.end())
    {
        int k = p->first;

        if(mp[k].size()==1) // if the number is present only once
            v.pb({k,0}); // 
        else
        {
            // make a set containing all the possible values of differences
            set <ll> s;
            rep(i, 1, mp[k].size())
            {
                s.insert(abs(mp[k][i] - mp[k][i-1]));
                if(s.size() > 1)
                    break;
            }
            set<ll>::iterator q = s.begin();
            // if there is more than one value of difference, then it is not an arithmetic progression
            if(s.size() == 1)
                v.pb({k,*q});
        }
        p++; 
    }

    cout<<v.size()<<"\n";
    rep(i,0,v.size())
        cout<<v[i].first<<" "<<v[i].second<<"\n";
}