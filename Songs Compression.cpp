// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<numeric>
// #include<map>
#include<bits/stdc++.h>
using namespace std;
    
// problem name: Songs Compression ( Problem - 1015C )
// problem link: https://codeforces.com/problemset/problem/1015/C

int main()
{
    int n = 0; cin >> n;
    long long m = 0; cin >> m;
    vector<pair<int, int>> songs; songs.reserve(n);
    vector<int> differance; differance.reserve(n);
    pair<int, int> p;
    for(int i = 0; i < n; i++)
    {
        cin >> p.first >> p.second;
        songs.emplace_back(p);
    }
    for(auto song : songs)
        differance.emplace_back(song.first - song.second);
    
    sort(differance.begin(), differance.end());

    long long songs_size = 0, compressed_size = 0;
    for(auto song: songs)
    {
        songs_size += song.first;
        compressed_size += song.second;
    }
    int counter = 0;
    if(songs_size <= m) cout << 0 << endl;
    else if(compressed_size > m) cout << -1 << endl;
    else
    {
        for(long long i = differance.size() - 1; i >= 0 && songs_size > m ; i--)
        {
            songs_size -= differance[i];
            counter++;
        }
        cout << counter << endl;
    }
    

    return 0;
}

