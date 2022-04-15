#include<bits/stdc++.h>
using namespace std;

void bubblesort_Recursive2(int arr[], int n, int j)
{
	//base case
	if (n == 1)
		return;

	if (j == n - 1)
	{
		//reset the problem and reset j to 0
		bubblesort_Recursive2(arr, n - 1, 0);
		return;
	}

	//inner loop
	if (arr[j] > arr[j + 1])
		swap(arr[j], arr[j + 1]);
	bubblesort_Recursive2(arr, n, j + 1);
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

	bubblesort_Recursive2(arr, n, 0);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}