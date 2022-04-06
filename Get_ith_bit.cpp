#include<bits/stdc++.h>
using namespace std;

int get_Ith_bit(int n, int i)
{
	int mask = (1 << i);
	if ((n & mask) > 0)
		return 1;
	else
		return 0;
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

	cout << get_Ith_bit(n, i) << endl;

	return 0;
}