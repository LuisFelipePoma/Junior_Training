// 3. Using ms.erase(v) to delete just one copy of value v from a multiset<int> ms that
// may contain 0, 1, or more copies of v.

#include <bits/stdc++.h>

int main()
{
	std::multiset<int> ms = {2, 3, 4, 2, 5, 2, 6};

	int valueToRemove = 2; // Replace with the value you want to remove

	// Find the iterator pointing to the first occurrence of the value
	auto it = ms.find(valueToRemove);

	// If the value is found, erase it
	if (it != ms.end())
	{
		ms.erase(it); // TO ERASE BY POSITION
		// ms.erase(2); // TO ERASE ALL OCURRENCES
		std::cout << "One occurrence of " << valueToRemove << " removed." << std::endl;
	}
	else
	{
		std::cout << valueToRemove << " not found in the multiset." << std::endl;
	}

	// Print the contents of the multiset after removal
	std::cout << "Remaining elements in the multiset: ";
	for (int elem : ms)
	{
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	return 0;
}
