#include "ege25.h"

void task7709()
{
	int const n = 5;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int k = 0;
	for (int i = 0; i < n - 1; i++)
	{
		int sum = a[i] + a[i + 1];
		bool delNa3 = (sum % 3 == 0);
		bool delNa9 = (sum % 9 != 0);
		if (delNa3 && delNa9)
		{
			++k;
		}
	}
	cout << k;
}

