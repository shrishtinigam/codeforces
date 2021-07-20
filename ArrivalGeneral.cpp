// Codeforces Round #103 (Div. 2) https://codeforces.com/problemset/problem/144/A
#include <iostream>
#include <ios>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
#define REP(i,a,b) for (int i = a; i < b; i++)
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int max = 0;
    int max_pos = 0;
    int min = 200;
    int min_pos = 0;
    REP(i, 0, n)
    {
        int x;
        cin >> x;
        if(x > max)
        {
            max = x;
            max_pos = i;
        }
        if(x <= min)
        {
            min = x;
            min_pos = i;
        }
    }
    
    int swap = 0;
    if (max_pos < min_pos) 
        swap = max_pos + n - 1 - min_pos;
	else 
	    swap = max_pos + n - 1 - min_pos - 1;
	cout << swap << "\n";
}



