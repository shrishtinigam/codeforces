// Codeforces Round #163 (Div. 2) https://codeforces.com/problemset/problem/266/B
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n, k;
    cin >> n >> k;
    
    string queue;
    cin >> queue;
    
    REP(i, 0, k)
    {
        REP(j, 0, n)
        {
            if(queue[j] == 'B' && (j+1) < n)
            {
                if(queue[j + 1] == 'G')
                {
                    queue[j] = 'G';
                    queue[j+1] = 'B';
                    j++;
                }
            }
        }
    }
    
    cout << queue;
}



