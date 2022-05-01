#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		if (n <= 1399)
			cout << "Division 4" << endl;
		else if (n >= 1400 and n <= 1599)
			cout << "Division 3" << endl;
		else if (n >= 1600 and n <= 1899)
			cout << "Division 2" << endl;
		else if (n >= 1900)
			cout << "Division 1" << endl;
	}
}