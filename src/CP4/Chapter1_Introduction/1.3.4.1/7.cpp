// Generate all possible permutations of {‘A’, ‘B’, ‘C’, . . . , ‘J’}, the first N = 10 letters
// in the alphabet (see Section 3.2.1
#include <bits/stdc++.h>
using namespace std;

int main()
{
	// Set of elements
	std::vector<char> elements = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
	long long n = 0;
	// Generate permutations
	do
	{
		n++;
		// Print the current permutation
		for (char element : elements)
		{
			std::cout << element << ' ';
		}
		std::cout << std::endl;
	} while (std::next_permutation(elements.begin(), elements.end()));
	cout << n << endl;
	return 0;
}