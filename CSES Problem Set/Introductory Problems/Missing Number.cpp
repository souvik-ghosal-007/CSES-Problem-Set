#include <bits/stdc++.h>
using namespace std;

#define int long long int

int missingNum(int n, vector<int>& nums)
{
	int actualSum = n * (n + 1) / 2;

	int sum = 0;
	for (auto it : nums)
	{
		sum += it;
	}

	return (actualSum - sum);
}

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n; cin >> n;

	vector<int> nums(n - 1);
	for (int i = 0; i < n - 1; i++)
	{
		cin >> nums[i];
	}

	cout << missingNum(n, nums) << endl;

	return 0;
}