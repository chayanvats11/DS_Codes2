#include<bits/stdc++.h>
using namespace std;

int count_bits(int n)
{
	int cnt = 0;
	while (n > 0)
	{
		int last_bit = (n & 1);
		cnt += last_bit;

		n = n >> 1;
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

	cout <<	count_bits(n) << endl;

}
