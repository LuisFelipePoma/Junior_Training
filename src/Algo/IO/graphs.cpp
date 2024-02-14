#include <bits/stdc++.h>

using namespace std;

// Graphs with weight
vector<vector<pair<int, int>>> read_weight_graph(const char *filename)
{
	vector<vector<pair<int, int>>> G;
	ifstream file(filename);
	string line;
	while (getline(file, line))
	{
		istringstream iss(line);
		vector<pair<int, int>> row;
		int a, b;
		while (iss >> a >> b)
		{
			row.push_back({a, b});
		}
		G.push_back(row);
	}
	file.close();
	return G;
}

// Graphs without weight
vector<vector<int>> read_graph(const char *filename)
{
	vector<vector<int>> G;
	ifstream file(filename);
	string line;
	while (getline(file, line))
	{
		istringstream iss(line);
		vector<int> row;
		int a;
		while (iss >> a)
		{
			if (a == '-')
				row.push_back({});
			else
				row.push_back(a);
		}
		G.push_back(row);
	}
	file.close();
	return G;
}
