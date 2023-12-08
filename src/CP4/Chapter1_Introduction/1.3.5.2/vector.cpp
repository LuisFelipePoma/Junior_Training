#include <bits/stdc++.h>

// Assume that v is a vector<int> that contains a few random integers.


// 	std::vector<int> v;
// 	for (int i = 1; i <= 4; ++i)
// 		v.push_back(i); // Try changing 4 to 5
// 	std::vector<int>::iterator it = v.begin();
// 	std::cout << *it << "\n"; // Should output v[0] = 1
// 	v.push_back(rand());	  // Increase vector size by 1
// 	std::cout << *it << "\n"; // Isn't v[0] supposed to remain 1?
// 	return 0;


int main() {
	// std::vector<int> v;

    // for (int i = 1; i <= 4; ++i) v.push_back(i); // Try changing 4 to 5
    // std::vector<int>::iterator it = v.begin();
    // std::cout << *it << "\n"; // Should output v[0] = 1

    // v.push_back(rand()); // Increase vector size by 1
    // std::cout << *it << "\n"; // Isn't v[0] supposed to remain 1?

    // return 0;

    std::vector<int> v;

    for (int i = 1; i <= 5; ++i) v.push_back(i); // Change 4 to 5
    std::vector<int>::iterator it = v.begin();
    std::cout << *it << "\n"; // Should output v[0] = 1

    v.push_back(rand()); // Increase vector size by 1
    it = v.begin(); // Reassign the iterator after potential reallocation
    std::cout << *it << "\n"; // Now v[0] remains 1

    return 0;
}

