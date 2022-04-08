#include<bits/stdc++.h>
using namespace std;

int count_bits_faster(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		n = n & (n - 1);
		cnt++;
	}

	return cnt;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	cout << count_bits_faster(n) << endl;
}