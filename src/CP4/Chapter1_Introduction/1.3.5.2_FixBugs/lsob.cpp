#include <bits/stdc++.h>
#define LSOne(S) ((S) & -(S))

// Find the Least Significant One bit of a 32-bit signed integer (7  - 5)
// #define LSOne(S) (S & -S).
int main()
{
	std::int32_t num = 2;
	int ls1bPosition = __builtin_ctz(LSOne(num));

	std::cout << "Position of the Least Significant One bit: " << ls1bPosition << std::endl;

	return 0;
}
