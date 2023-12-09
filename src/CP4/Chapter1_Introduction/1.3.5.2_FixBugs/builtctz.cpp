#include <bits/stdc++.h>

// Using builtin ctz(v) to count the number of trailing zeroes in a 64-bit signed int
// long long v.

int main()
{
	long long x = 1e10;
	long long count = __builtin_ctzll(x);
	std::cout << count << std::endl;
}