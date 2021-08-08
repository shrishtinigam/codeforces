// Codeforces Round #146 (Div. 2) https://codeforces.com/problemset/problem/236/B
#include <iostream>
#include <ios>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
using namespace std;
#define rep(i,a,b) for (int i = a; i < b; i++)
#define rep2(i,a,b) for (int i = a; i > b; i--)
#define ll long long
#define pb push_back
#define mp make_pair
ll MOD = 1073741824;

// Theory - https://www.vedantu.com/question-answer/find-the-number-of-divisors-and-sum-of-divisors-class-12-maths-cbse-5f83028b781fe74044c327cc

map <int, int> PrimeFactorise(int n) {
    map <int, int> map1;
    vector <int> prime{3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    while (n%2 == 0)
    {
        if(map1.find(2) == map1.end())
            map1.insert(pair<int, int>(2, 1));
        else
            map1[2]++;
        n = n/2;
    }
    for (int i = 0; i < prime.size(); i++)
    {
        while (n % prime[i] == 0)
        {
            if(map1.find(prime[i]) == map1.end())
                map1.insert(pair<int, int>(prime[i], 1));
            else
                map1[prime[i]]++;
            n = n/prime[i];
        }
    }
    if (n > 2)
    {
        if(map1.find(n) == map1.end())
            map1.insert(pair<int, int>(n, 1));
        else
            map1[n]++;
    }
    return map1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    map <int, int> x;
    ll sum = 0;
    rep(i, 1, a+1)
    {
        rep(j, 1, b+1)
        {
            rep(k, 1, c+1)
            {
                x = PrimeFactorise(i*j*k);
                map<int, int>::iterator itr;
                ll y = 1;
                for (itr = x.begin(); itr != x.end(); ++itr) 
                    y = y*(itr->second + 1);
                sum = sum + y%MOD;
            }
        }
    }

    cout << sum;

}