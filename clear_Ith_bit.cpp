#include<bits/stdc++.h>
using namespace std;

void clear_Ith_Bit(int &n, int i)
{
	int mask = ~(1 << i);
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

	clear_Ith_Bit(n, i);
	cout << n << endl;
}
