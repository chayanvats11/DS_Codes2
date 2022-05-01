#include<bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	string s;
	cin >> s;
	int cnt = 1, flag = 0;
	char temp = s[0];

	for (int i = 1; i < s.length(); i++)
	{
		if (s[i] == temp)
		{
			cnt++;
			if (cnt == 7)
			{
				cout << "YES" << endl;
				flag = 1;
				break;
			}
		}
		else
		{
			temp = s[i];
			cnt = 1;
		}
	}

	if (flag == 0)
		cout << "NO" << endl;
}