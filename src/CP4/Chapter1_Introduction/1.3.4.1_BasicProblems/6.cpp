// 6. Given a list of sorted integers L of size up to 1M items, determine whether a value v
// exists in L with no more than 20 comparisons (more details in Section 2.2)

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(const std::vector<int> &L, int v)
{
	int low = 0;
	int high = L.size() - 1;
	int comparisons = 0;

	while (low <= high && comparisons <= 20)
	{
		int mid = low + (high - low) / 2;

		if (L[mid] == v)
		{
			cout << "Value " << v << " found at index " << mid << " with " << comparisons << " comparisons." << endl;
			return true;
		}
		else if (L[mid] < v)
		{
			low = mid + 1;
		}
		else
		{
			high = mid - 1;
		}

		comparisons++;
	}

	cout << "Value " << v << " not found with " << comparisons << " comparisons." << endl;
	return false;
}

int main()
{
	vector<int> L = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};

	int v;
	cout << "Enter the value to search for: ";
	cin >> v;

	binarySearch(L, v);

	return 0;
}