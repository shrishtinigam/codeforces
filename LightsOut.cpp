// Codeforces Round #168 (Div. 2) https://codeforces.com/problemset/problem/275/A
#include <iostream>
#include <ios>
#include <string>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
int Switch(int n)
{
    if(n==1)
        return 0;
    return 1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[3][3] = {{1,1,1}, {1,1,1}, {1,1,1}};
    int arr2[3][3] = {{0,0,0}, {0,0,0}, {0,0,0}};
    REP(i,0,3)
    {
        REP(j,0,3)
        {
            int x;
            cin >> x;
            arr2[i][j] = x%2;
        }
    }
    REP(i,0,3)
    {
        REP(j,0,3)
        {
            REP(k,0,arr2[i][j])
            {
                arr[i][j] = Switch(arr[i][j]);
                if(i-1 >= 0)
                    arr[i-1][j] = Switch(arr[i-1][j]);
                if(i+1 <= 2)
                    arr[i+1][j] = Switch(arr[i+1][j]);
                if(j+1 <= 2)
                    arr[i][j+1] = Switch(arr[i][j+1]);
                if(j-1 >= 0)
                    arr[i][j-1] = Switch(arr[i][j-1]);
            }
        }
    }
    REP(i,0,3)
    {
        REP(j,0,3)
        {
            cout << arr[i][j];
        }
        cout << "\n";
    }
}
