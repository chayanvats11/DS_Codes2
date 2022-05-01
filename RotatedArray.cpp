#include<bits/stdc++.h>
using namespace std;

int rotatedSearch(vector<int>a, int key)
{
	int n = a.size();
	int s = 0;
	int e = n - 1;

	while (s <= e)
	{
		int mid = (s + e) / 2;
		if (a[mid] == key)
			return mid;

		//2 cases from Logic
		if (a[s] <= a[mid])
		{
			//left
			if (key >= a[s] and key <= a[mid])
				e = mid - 1;
			else
				s = mid + 1;
		}
		else
		{
			//right
			if (key >= a[mid] and key <= a[e])
				s = mid + 1;
			else
				e = mid - 1;
		}
	}

	return -1;
}
int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	int n;
	cin >> n;

	vector<int> a{4, 5, 6, 7, 0, 1, 2, 3};
	int key;
	cin >> key;

	cout << rotatedSearch(a, key) << endl;
	return 0;


}