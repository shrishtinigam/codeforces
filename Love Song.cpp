#include <iostream>
#include <ios>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, q;
    cin >> n >> q;
    
    string song;
    cin >> song;
    
    int arr[n+1];
    arr[0] = 0;
    ll sum = 0;
    REP(i, 1, n+1)
    {
        sum = sum + song[i-1] - 96;
        arr[i] = sum;
    }

    while(q--)
    {
       ll l, r;
       cin >> l >> r;
       ll qlen; // question length
       qlen = arr[r] - arr[l-1];
       cout << qlen << "\n";
    }
}