// Codeforces Round #111 (Div. 2) https://codeforces.com/problemset/problem/160/A
#include <iostream>
#include <ios>
#include <algorithm>
#include <vector>
#include <numeric>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long
bool compare(int x, int y)
{
    return x > y;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> coins;
    int n;
    cin >> n;
    REP(i,0,n)
    {
        int x;
        cin >> x;
        coins.push_back(x);
    }
    sort(coins.begin(), coins.end(), compare);
    int sum = accumulate(coins.begin(), coins.end(), 0);
    int my_sum = 0;
    int my_coins = 0;
    while(my_sum <= (sum - my_sum))
    {
        my_sum = my_sum + coins[my_coins];
        my_coins++;
    }
    cout << my_coins;
}

