#include<bits/stdc++.h>
using namespace std;

void bubblesort_Recursive(int arr[], int n)
{
	//base case
	if (n == 1)
		return;

	for (int j = 0; j < n - 1; j++)
	{
		if (arr[j] > arr[j + 1])
			swap(arr[j], arr[j + 1]);
	}

	bubblesort_Recursive(arr, n - 1);
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

	bubblesort_Recursive(arr, n);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}