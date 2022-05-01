#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int v;
	cin >> v;
	int flag = 0;
	int arr[9];
	int running_sum;
	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		running_sum += arr[i];

	}

	for (int i = 0; i < 9; i++)
	{
		if (arr[i] <= v)
			flag = 1;
	}

	if (flag == 1)
	{
		int temp = arr[0];
		int temp2 = 0;
		for (int i = 1; i < 9; i++)
		{

			if (arr[i] <= temp && i >= temp2)
			{
				temp = arr[i];
				temp2 = i;
			}
		}

		if (running_sum > temp)
			while (v > 0)
			{
				cout << temp2 + 1;
				v = v - temp;
			}

		cout << endl;
	}
	else
		cout << -1 << endl;
}