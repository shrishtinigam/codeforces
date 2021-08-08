// Codeforces Round #191 (Div. 2) https://codeforces.com/problemset/problem/327/A
// FlippingGame.cpp
// can be solved using kadane's algorithm -> https://github.com/singalhimanshu/TheCodingGuy/blob/master/Sequences/flippingGame.cpp
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
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
    int n; cin >> n;
    int x, count1(0), z(0), zmax(-1);
    if(n == 1)
    {
        cin >> x;
        if(x == 0) cout << 1;
        if(x == 1) cout << 0;
        return 0;
    }
    rep(i, 0, n)
    {
        cout << count1 << " " << zmax << " " << z << "\n";
        cin >> x;
        if(x == 1)
        {
            count1++;
            if(z > 0)
                z--;
        }
        else
        {
            z++;
            if(z > zmax)
            {
                zmax = z;
            }
        }
        
    }
    cout << count1 << " " << zmax << " " << z << "\n";
    cout << zmax + count1;
}