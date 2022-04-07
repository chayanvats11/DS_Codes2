#include<bits/stdc++.h>
using namespace std;

void clear_Ith_Bit(int &n, int i)
{
	int mask = ~(1 << i);
	n = n & mask;

}

void update_Ith_Bit(int &n, int i, int val)
{
	clear_Ith_Bit(n, i);
	int mask = (val << i);
	n = n | mask; //sets the right value
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

	int val; // either 1 or 0
	cin >> val;

	update_Ith_Bit(n, i, val);
	cout << n << endl;
}
