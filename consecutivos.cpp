#include<bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	vector<vector<int>> slices = {};
	vector<int> values = {};
	
	int read, tmp;
	
	cin >> read;


	while (read)
	{
		cin >> tmp;
		values.push_back(tmp);
		--read;
	}
	
	vector<int> cache = {};
	for (auto i = 0; i < values.size(); ++i)
	{
		cache.push_back(values[i]);
		if (values[i] != values[i+1])
		{
			slices.push_back(cache);
			cache.clear();
		}
	}

	int max = slices[0].size();
	for (auto db : slices)
	{
		if (db.size() > max)
			max = db.size();
	}

	cout << max;
	return 0;
}
