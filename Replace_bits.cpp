#include<bits/stdc++.h>
using namespace std;

/*Replace bits in N by bits in M
You are given two 32 bit numbers N and M and two bit positions i and j.
Write a method to set all bits between i and j in N equal to M
M becomes a substring of N locationed at and staring at j

Example
N = 10000000000
M = 10101
i = 2,j = 6
Output = 1001010100

*/

void clear_bits_Inrange(int &n, int i, int j)
{
	int a = (~0) << (j + 1);
	int b = (1 << i) - 1;
	int mask = a | b;
	n = n & mask;
}

void replaceBits(int &n, int i, int j, int m)
{
	clear_bits_Inrange(n, i, j);
	int mask = (m << i);
	n = n | mask;
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

	int m;
	cin >> m;

	replaceBits(n, i, j, m);
	cout << n << endl;
}