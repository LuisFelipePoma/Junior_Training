#include <bits/stdc++.h>
typedef long long ll;
ll MAXLL = 1e18 + 5;

using namespace std;

ll nums[5];

ll gcd(ll a, ll b)
{
	if (a == 0)
		return b;
	return gcd(b % a, a);
}

ll lcm(ll a, ll b)
{
	a /= gcd(a, b);
	return (a > MAXLL / b) ? MAXLL : a * b;
}

void solve()
{
	ll min, max, a, d;
	cin >> min >> max >> a >> d;

	nums[0] = a;
	nums[1] = a + d;
	nums[2] = a + (2 * d);
	nums[3] = a + (3 * d);
	nums[4] = a + (4 * d);

	// Bitmasking -> 2^n - 1 subsets
	int subsets = (1 << 5) - 1;
	// A B C D -> A B C D AB AC AD BC BD CD ABC ABD ACD BCD ABCD -> Bitmasking -> (2^n) -1 | n = nums.size() = 5 === (i<<5) - 1

	// 0 0 0 1 -> D			1| + (odd) => number of bits
	// 0 0 1 0 -> C			1| + (odd)
	// 0 0 1 1 -> C^D		2| - (even)
	// 0 1 0 0 -> B			1| + (odd)
	// 0 1 0 1 -> B^D		2| - (even)
	// 0 1 1 0 -> B^C		2| - (even)
	// 0 1 1 1 -> B^C^D		3| + (odd)
	// 1 0 0 0 -> A			1| + (odd)
	// 1 0 0 1 -> A^D		2| - (even)
	// 1 0 1 0 -> A^C		2| - (even)
	// 1 0 1 1 -> A^C^D		3| + (odd)
	// 1 1 0 0 -> A^B		2| - (even)
	// 1 1 0 1 -> A^B^D		3| + (odd)
	// 1 1 1 0 -> A^B^C		3| + (odd)
	// 1 1 1 1 -> A^B^C^D	4| - (even)

	ll n_mult = 0; // number of multiples

	// For iterate each subset
	for (int i = 1; i <= subsets; i++)
	{
		ll denom = 1;  // initial denominator
		ll n_bits = 0; // count number of bits of odd or even operation set

		// For iterate each bit of a one subset
		for (int j = 0; j <= 4; j++)
		{
			// (1 << j) => 1 * 2^j | Create a mask for a bit in position j
			// 1 << 0 = 1 | 1 << 1 = 2 | 1 << 2 = 4 | 1 << 3 = 8 | 1 << 4 = 16
			// 0 0 0 0 1  | 0 0 0 1 0  | 0 0 1 0 0  | 0 1 0 0 0	 | 1 0 0 0 0
			// Then apply i & (1 << j) to verify if exists a bit in a subset
			// Example number 5
			// i = 5    	=> 0 0 1 0 1  | 0 0 1 0 1  | 0 0 1 0 1  | 0 0 1 0 1	 | 0 0 1 0 1
			// (1 << j) 	=> 0 0 0 0 1  | 0 0 0 1 0  | 0 0 1 0 0  | 0 1 0 0 0	 | 1 0 0 0 0
			// i & (1 << j) => 0 0 0 0 1  | 0 0 0 0 0  | 0 0 1 0 0  | 0 0 0 0 0	 | 0 0 0 0 0
			// result if	=>   true     |    false   |  	true	|	false	 | 	  false
			if (i & (1 << j))
			{
				n_bits++;					 // count a bit
				denom = lcm(denom, nums[j]); // calculate lcm and save denom for a subset
			}
		}
		// Calculate number of divisors between min and max
		// (max / denom) = number of divisors of max
		// ceil(min / float(denom)) = number of divisors of min
		ll divisors = (float(max) / denom) - ceil(min / float(denom));

		// If number of bits is odd then add divisors to n_mult otherwise substract
		if (n_bits & 1)
			n_mult += divisors;
		else
			n_mult -= divisors;
	}
	printf("%lld\n", max - min - n_mult);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
