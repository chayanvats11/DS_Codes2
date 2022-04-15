#include<bits/stdc++.h>
using namespace std;

string spells[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printSpell(int n)
{
	if (n == 0)
		return;
	int last_digit = n % 10;
	printSpell(n / 10);
	cout << spells[last_digit] << " ";
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	printSpell(n);
	return 0;
}