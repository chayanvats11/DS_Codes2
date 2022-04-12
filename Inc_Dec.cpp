#include<bits/stdc++.h>
using namespace std;

void dec(int n)
{
	//base case
	if (n == 0)
		return;

	//towards the base case
	cout << n << " ";
	dec(n - 1);
}

void inc(int n)
{
	//base case
	if (n == 0)
		return;

	//away from the base case
	inc(n - 1);
	cout << n << " ";
}


int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << "Decreasing Order :" << endl;
	dec(n);
	cout << endl;

	cout << "Increasing Order :" << endl;
	inc(n);
	cout << endl;
}