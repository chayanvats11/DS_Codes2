#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i <= n; i++)
	{
		for (int k = 1; k <= n - i; k++)
		{
			cout << "  ";
		}
		for (int j = 0; j <= i; j++)
		{
			if (j != i)
				cout << j << " ";
			else
				cout << j;
		}

		for (int m = i - 1; m >= 0; m--)
		{
			cout << " ";
			cout << m;
		}
		cout << endl;
	}


	for (int i = n - 1; i >= 0; i--)
	{
		for (int k = 1; k <= n - i; k++)
		{
			cout << "  ";
		}

		for (int j = 0; j <= i; j++)
		{
			if (j != i)
				cout << j << " ";
			else
				cout << j;
		}

		for (int m = i - 1; m >= 0; m--)
		{
			cout << " ";
			cout << m;
		}

		cout << endl;

	}
}