// Generate all possible subsets of {1, 2, . . . , 20}, the first N = 20 positive integers (see
// Section 3.2.1).

#include <bits/stdc++.h>
using namespace std;

void generateSubsets(const std::vector<int> &elements)
{
	int n = elements.size();

	// Number of subsets is 2^n
	int totalSubsets = 1 << n;

	// Iterate through all possible subsets
	for (int subsetMask = 0; subsetMask < totalSubsets; ++subsetMask)
	{
		std::cout << "{";

		// Print elements of the current subset
		for (int i = 0; i < n; ++i)
		{
			if ((subsetMask >> i) & 1)
			{
				std::cout << elements[i] << " ";
			}
		}

		std::cout << "}\n";
	}
}
int main()
{
	// Set of elements
	std::vector<int> elements;
	for (int i = 1; i <= 20; ++i)
	{
		elements.push_back(i);
	}

	// Generate subsets
	generateSubsets(elements);
	return 0;
}