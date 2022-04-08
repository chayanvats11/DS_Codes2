#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	if ((n & (n - 1)) == 0)
		cout << n << " is power of 2" << endl;
	else
		cout << n << " is NOT a power of 2" << endl;

}