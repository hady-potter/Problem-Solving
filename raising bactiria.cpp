#include<bits/stdc++.h>
using namespace std;

int main()
{
    // problem name: Raising Bacteria ( Problem - 579A - Codeforces )
    // problem link: https://codeforces.com/problemset/problem/579/A
    

    // first test case: 5 (101) -> 2
    // second test case: 8 (1000) -> 1
    // sample 1: 13 (1101) -> 3
    // sample 2: 17 (10001) -> 2
    // sample 3: 19 (10011) -> 3
    // did u notice th pattern!
    // the number of set bits is the answer

    // solution is one line of code
    long long x = 0; cin >> x;
    cout << __builtin_popcount(x) << endl;


    //another solution 
    // int counter = 0;
    // while(x > 0)
    // {
    //     if(x % 2 == 1)
    //     {
    //         counter++;
    //         x--;
    //     }
    //     else x /= 2;
    // }
    // cout << counter << endl;


    return 0;
}