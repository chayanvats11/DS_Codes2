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
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		arr[i] = i + 1;
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 1; i < n; i++)
	{
		int j = i;
		int temp = j % n;
		for (int i = n - temp; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		for (int i = 0; i < n - temp; i++)
		{
			cout << arr[i] << " ";
		}

		cout << endl;
	}
}