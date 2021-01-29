#include<bits/stdc++.h>
using namespace std;


// problem name: Number of Triplets (Problem - 181B - Codeforces)
// problem link: https://codeforces.com/problemset/problem/181/B 

int main()
{	
	int n = 0; cin >> n;
	vector<pair<int, int>> vec;
	set<pair<int, int>> given;
	pair<int, int> p;
	for(int i = 0; i < n; i++)
	{
		cin >> p.first >> p.second;
		vec.push_back(p);
		given.insert(p);
	}

	int counter = 0;
    
    // brute force approach
	for(int i = 0; i < vec.size(); i++)
	{
		for(int j = i + 1; j < vec.size(); j++)
		{
			pair<int, int> p2;
			p2.first = vec[i].first + vec[j].first;
			p2.second = vec[i].second + vec[j].second;
			if(p2.first % 2 == 0 && p2.second % 2 == 0)
			{
				pair<int, int> p3(p2.first / 2, p2.second / 2);
				if(given.count(p3))
					counter++;

			}
		}
	}
	cout << counter << endl;
	return 0;
}