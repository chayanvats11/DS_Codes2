#include<bits/stdc++.h>
using namespace std;

int covert_toBinary(int n)
{
	int ans = 0;
	int p = 1;

	while (n > 0)
	{
		int last_bit = (n & 1);
		ans += p * last_bit;

		p = p * 10;
		n = n >> 1;
	}

	return ans;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << covert_toBinary(n) << endl;
	return 0;
}