// DZYLovesChessboard.cpp - unfinished
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
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
    int n, m;
    cin >> n >> m;
    vector <string> q(n);
    rep(i, 0, n)
        cin >> q[i];

    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if(q[i][j] == '.')
            {
                if(j&1){
                if(i&1){
                    cout<<"W";
                }
                else{
                    cout<<"B";
                }
            }
            else{
                if(i&1){
                    cout<<"B";
                }
                else{
                    cout<<"W";
                }
            }
            }
            else{
                cout<<arr[i][j];
            }
        }
        cout<<"\n";
    }
}