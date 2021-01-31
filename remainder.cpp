#include<bits/stdc++.h>
using namespace std;

int main()
{
    // problem name: Remainder ( Problem - 1165A - Codeforces )
    // problem link: https://codeforces.com/problemset/problem/1165/A

    long long n = 0, x = 0, y = 0;
    string s;
    cin >> n >> x >> y >> s;

    reverse(s.begin(), s.end());

    long long counter = 0;
    for(int i = 0; i < x; i++)
    {
        if(i == y) counter += (s[i] == '0');
        else counter += (s[i] == '1');
    }
    
    cout << counter << endl;
    return 0;
}