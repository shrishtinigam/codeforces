// SlightlyDecreasingPermutations.cpp
// Codeforces Round #175 (Div. 2) https://codeforces.com/problemset/problem/285/A
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set> 
#include <iterator>
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
    int n, k;
    cin >> n >> k;
    rep(i, 0, n-k-1)
        cout << i+1 <<" ";
    cout << n << " ";
    rep2(i, n-1, n-k-1)
        cout << i << " ";
}

/* This method exceeds time limit
int n, k;
    cin >> n >> k;
int arr[n];
    rep(i, 0, n)    
        arr[i] = i + 1;
    int flag = 0;
    while(flag == 0)
    {
        rep(i, 0, n-1)
        {
            if(arr[i] > arr[i+1])
                flag++;
        }
        if(flag==k)
            break;
        next_permutation(arr, arr+n);
        flag = 0;
    }
    rep(i, 0, n)
    {
        cout << arr[i] << " ";
    }
*/