// Codeforces Round #191 (Div. 2) https://codeforces.com/problemset/problem/327/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <iterator>
#include <cmath>
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
    int n;
    cin >> n;
    // print_N_primes(n);
    rep(i, 0, n)
        cout << i + n*10 << " ";
}

/*
void print_N_primes(int N)
{
    int i(0), j, flag;
    while(N != 0)
    {
        if (i == 1 || i == 0)
        {
            i++;
            continue;
        }
        flag = 1;
        for (j = 2; j <= floor(sqrt(i)); ++j) 
        {
            if (i % j == 0) 
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            cout << i << " ";
            N--;
        }
        i++;
    }
}*/