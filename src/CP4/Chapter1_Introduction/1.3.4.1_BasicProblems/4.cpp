#include <bits/stdc++.h>

// 4. Given n random integers, print the distinct (unique) integers in sorted order
int main()
{
	int n; // Number of integers
	std::cin >> n;

	std::vector<int> randomIntegers(n);

	// Input the random integers
	for (int i = 0; i < n; ++i)
	{
		std::cin >> randomIntegers[i];
	}

	// Use a set to store distinct integers
	std::set<int> distinctIntegers(randomIntegers.begin(), randomIntegers.end());

	// Copy the distinct integers to a vector
	std::vector<int> sortedDistinctIntegers(distinctIntegers.begin(), distinctIntegers.end());

	// Sort the vector of distinct integers
	std::sort(sortedDistinctIntegers.begin(), sortedDistinctIntegers.end());

	// Print the sorted distinct integers
	std::cout << "Sorted distinct integers:" << std::endl;
	for (int num : sortedDistinctIntegers)
	{
		std::cout << num << " ";
	}

	return 0;
}
