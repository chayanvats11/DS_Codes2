#include<bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int s, int e)
{
	int pivot = a[e];
	int i = s - 1;

	for (int j = s; j < e; j++)
	{
		if (a[j] < pivot)
		{
			i++;
			swap(a[i], a[j]);
		}

	}
	swap(a[i + 1], a[e]);
	return i + 1;
}

void quicksort(vector<int> &a, int s, int e)
{
	//base case
	if (s >= e)
		return;

	//recursive case
	int p = partition(a, s, e);
	quicksort(a, s, p - 1);
	quicksort(a, p + 1, e);

}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int> arr {10, 5, 2, 0, 7, 6, 4};
	int n = arr.size();

	quicksort(arr, 0, n - 1);

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}