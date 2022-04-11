#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n)
{
	//base case
	if (n == 1 or n == 0)
		return true;

	//recursive case
	if (arr[0] < arr[1] and isSorted(arr + 1, n - 1))
		return true;

	return false;
}

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
		cin >> arr[i];
	}

	cout << isSorted(arr, n) << endl;

}