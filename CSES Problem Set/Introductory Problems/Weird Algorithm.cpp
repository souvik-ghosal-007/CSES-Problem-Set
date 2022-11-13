#include <bits/stdc++.h>
using namespace std;

void print(long long int n)
{
	cout << n << " ";

	while (n != 1)
	{
		if (n % 2 == 0)
		{
			n /= 2;
		}

		else
		{
			n *= 3;
			n += 1;
		}

		cout << n << " ";
	}
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	long long int n;
	cin >> n;

	print(n);

	return 0;
}