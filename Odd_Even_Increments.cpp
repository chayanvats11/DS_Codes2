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

		vector<int>even;
		for (int i = 0; i < n; i += 2)
		{
			even.push_back(arr[i]);
		}

		vector<int>odd;
		for (int i = 1; i < n; i += 2)
		{
			odd.push_back(arr[i]);
		}

		int temp1, temp2;
		int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0;
		for (int i = 0; i < even.size(); i++)
		{
			temp1 = even[i] % 2;
			if (temp1 == 0)
			{
				cnt1 += 1;
			}
			else
			{
				cnt2 += 1;
			}
		}

		int flag = 0;
		if (cnt1 >= 1 and cnt2 >= 1)
			flag = 1;
		else
			flag = 0;

		for (int i = 0; i < odd.size(); i++)
		{
			temp2 = odd[i] % 2;
			if (temp2 == 0)
			{
				cnt3 += 1;
			}
			else
			{
				cnt4 += 1;
			}
		}

		int flag2 = 0;
		if (cnt3 >= 1 and cnt4 >= 1)
			flag2 = 1;
		else
			flag2 = 0;

		if (flag == 0 and flag2 == 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;





	}
}