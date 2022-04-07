#include<bits/stdc++.h>
using namespace std;

void clear_bits_Inrange(int &n, int i, int j)
{
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	int i;
	cin >> i;

	int j;
	cin >> j;

	clear_bits_Inrange(n, i, j);
	cout << n << endl;
}