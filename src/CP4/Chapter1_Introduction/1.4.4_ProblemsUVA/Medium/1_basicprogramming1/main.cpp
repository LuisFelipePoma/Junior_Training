#include <bits/stdc++.h>
#include <numeric>
#include <vector>
typedef long long ll;

using namespace std;

void solve()
{
	int n, t;
	cin >> n >> t;
	vector<int> nums(n);
	for (int i = 0; i < n; i++)
	{
		cin >> nums[i];
	}

	switch (t)
	{
	case 1:
	{
		printf("1\n");
		break;
	}
	case 2:
	{
		if (nums[0] > nums[1])
			printf("Bigger\n");
		else if (nums[0] == nums[1])
			printf("Equal\n");
		else
			printf("Smaller\n");
		break;
	}
	case 3:
	{
		printf("%d\n", (nums[0] + nums[1] + nums[2]) / 3);
		break;
	}
	case 4:
	{
		printf("%d\n", accumulate(nums.begin(), nums.end(), 0));
		break;
	}
	case 5:
	{
		int sum = 0;
		for (int i : nums)
			if (i % 2 == 0)
				sum += i;
		printf("%d\n", sum);
		break;
	}
	case 6:
	{
		for (int i : nums)
			printf("%c", 'a' + (i % 26));
		break;
	}
	case 7:
	{
		vector<int> values(n, 0);
		int i = 0, b = 1;
		while (!values[i] && i != n - 1)
		{
			values[i] = 1;
			if (values[i] >= n)
			{
				b = 0;
				break;
			}
			i = values[i];
		}
		if (b)
			if (i == n - 1)
				cout << "Done";
			else
				cout << "Cyclic";
		else
			cout << "Out";
		break;
	}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	int t = 1;
	// cin>>t;
	while (t--)
		solve();
	return 0;
}
