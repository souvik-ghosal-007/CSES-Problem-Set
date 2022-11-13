#include <bits/stdc++.h>
using namespace std;

#define int long long int

int maxSubtring(string s)
{
	int n = s.size();

	int i = 0, j = 0;

	unordered_map<char, int> map;
	map[s[0]] = 1;

	while (i < n || j < n)
	{
		if (s[i] == s[j])
		{
			map[s[i]]++;
			j++;
		}
		else
		{
			i = j;
			map[s[i]] = 1;
			j++;
		}
	}

	for (auto it : map)
	{
		cout << it.second << endl;
	}

	return 0;
}

signed main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string s;
	cin >> s;

	cout << maxSubtring(s) << endl;

	return 0;
}