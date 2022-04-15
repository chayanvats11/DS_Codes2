#include<bits/stdc++.h>
using namespace std;

int fastpower(int a, int n)
{
	//base case
	if (n == 0)
		return 1;

	int subProb = fastpower(a, n / 2);
	int subProbSq = subProb * subProb;

	if (n & 1 == 1) //Odd number in form of binary
		return a * subProbSq;
	else
		return subProbSq;
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int a, n;
	cin >> a >> n;

	cout << fastpower(a, n) << endl;
	return 0;
}