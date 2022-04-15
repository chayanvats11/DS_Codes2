#include<bits/stdc++.h>
using namespace std;

int power(int a, int n)
{
	//base case
	if (n == 0)
		return 1;

	return a * power(a, n - 1);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, n;
	cin >> a >> n;

	cout << power(a, n) << endl;
	return 0;
}