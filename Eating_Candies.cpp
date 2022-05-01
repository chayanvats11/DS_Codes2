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

		int alice = 0, bob = 0, cnt = 0, final_cnt = 0, flag = 0;
		int temp1, temp2;
		for (int i = 0; i < n / 2; i++)
		{
			temp1 = arr[i];
			alice += arr[i];
			arr[i] = 0;
			if (temp1 != 0)
				cnt++;

			temp2 = arr[n - i - 1];
			bob += arr[n - 1 - i];
			arr[n - 1 - i] = 0;
			if (temp2 != 0)
				cnt++;

			if (alice == bob)
			{
				final_cnt = cnt;
				flag = 1;
			}
		}

		if (flag == 1)
			cout << final_cnt << endl;
		else
			cout << 0 << endl;
	}
}