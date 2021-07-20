// Not Completed - https://codeforces.com/contest/1547/problem/B
#include <iostream>
#include <ios>
#include <string>
#include <cmath>
#include <vector>
#include <cctype>
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
    REP(i,0,n)
    {
        string x;
        cin >> x;
        vector <int> arr;
        int min_pos = -1;
        int max = -1;
        REP(i, 0, x.length())
        {
            arr.push_back(tolower(x[i]) - 96);
            if(arr[i] == 1)
                min_pos = i;
            if(arr[i] > max)
                max = arr[i];
        }
        int flag = 0;
        REP(i, 1, max+1)
        {
            vector<int>::iterator it;
            it = find(arr.begin(),arr.end(),i);
            if(it == arr.end())
                flag = -1;
        }
        if(flag == -1)
        {
            cout << "NO" << "\n";
        }
        else if(min_pos != -1)
        {
            // left check
            int flag1 = 0;
            if(min_pos != 0)
            {
                int new1 = min_pos;
                while(true)
                {
                    if(arr[new1 - 1] > arr[new1] && (new1 - 1) >= 0)
                    {
                        flag1++;
                        new1--;
                    }
                    else
                        break;
                }
            }
            
            // right check
            int flag2 = 0;
            if(min_pos != (x.length()-1))
            {
                int new1 = min_pos;
                while(true)
                {
                    if(arr[new1 + 1] > arr[new1] && (new1 + 1) < x.length())
                    {
                        flag2++;
                        new1++;
                    }
                    else
                        break;
                }
            }
            if(min_pos == flag1 && (x.length()-min_pos-1) == flag2)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
        else
        {
            cout << "NO" << "\n";
        }
    }
}

