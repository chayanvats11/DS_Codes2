#include<bits/stdc++.h>
using namespace std;

//helper method
void merge(vector<int> &array, int s, int e)
{
	int i = s;
	int m = (s + e) / 2;
	int j = m + 1;

	vector<int>temp;

	while (i <= m and j <= e)
	{
		if (array[i] < array[j])
		{
			temp.push_back(array[i]);
			i++;
		}
		else
		{
			temp.push_back(array[j]);
			j++;
		}
	}

	//copy remaining elements from first array
	while (i <= m)
	{
		temp.push_back(array[i++]);
	}

	//or copy remaining elements from second array
	while (j <= e)
	{
		temp.push_back(array[j++]);
	}

	//copy back elements from temp to original array
	int k = 0;
	for (int idx = s; idx <= e; idx++)
	{
		array[idx] = temp[k++];
	}
	return;
}

//sorting method
void mergersort(vector<int>&arr, int s, int e)
{
	//base case
	if (s >= e)
		return;

	//recursion case
	int mid = (s + e) / 2;
	mergersort(arr, s, mid);
	mergersort(arr, mid + 1, e);
	return merge(arr, s, e);
}

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	vector<int>arr {10, 5, 7, 3, 76, 32, 11};
	int s = 0;
	int e = arr.size() - 1;
	mergersort(arr, s, e);

	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] << ", ";
	}

	cout << endl;
	return 0;

}