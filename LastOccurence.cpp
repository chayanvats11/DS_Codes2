#include<bits/stdc++.h>
using namespace std;

int last_Occur(int arr[], int n, int key)
{
	//base case
	if (n == 0)
		return -1;

	//recursive case

	int subIndex = last_Occur(arr + 1, n - 1, key);
	if (subIndex == -1)
	{
		if (arr[0] == key)
			return 0;
		else
			return -1;
	}
	else
		return subIndex + 1;
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

	int key;
	cin >> key;

	cout << last_Occur(arr, n, key) << endl;


}