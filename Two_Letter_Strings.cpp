#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n;
		cin >> n;
		string temp;
		vector<string>str;
		while (n--)
		{
			cin >> temp;
			str.push_back(temp);
		}

		long long int cnt = 0, final_cnt = 0;
		for (long long int i = 0; i < str.size(); i++)
		{
			for (long long int j = i + 1; j < str.size(); j++)
			{
				cnt = 0;
				if (str[i][0] != str[j][0])
					cnt++;
				if (str[i][1] != str[j][1])
					cnt++;

				if (cnt == 1)
					final_cnt += 1;
			}
		}

		cout << final_cnt << endl;

	}
}