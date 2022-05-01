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

		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + n);
		int temp = arr[0], cnt = 1, flag = 0;
		for (int i = 1; i < n; i++)
		{
			if (temp == arr[i])
			{
				cnt++;
				if (cnt == 3)
				{
					cout << temp << endl;
					flag = 1;
					break;
				}
			}
			else
			{
				temp = arr[i];
				cnt = 1;
			}
		}

		if (flag == 0)
			cout << -1 << endl;
	}
}