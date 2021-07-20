// Codeforces Beta Round #69 (Div. 2 Only) https://codeforces.com/problemset/problem/80/A
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n-1
    for (int i = 2; i <= floor(sqrt(n)); i++)
        if (n % i == 0)
            return false;
            
    return true;        
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    n++;
    while(isPrime(n) == false)
        n++;
    
    if(n == m)
        cout << "YES";
    else
        cout << "NO";
}