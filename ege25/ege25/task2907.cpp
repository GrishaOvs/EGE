#include "ege25.h"

void task2907()
{
	int const n = 5;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxEven = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxEven && a[i] % 2 == 0)
		{
			maxEven = a[i];
		}
	}
	int maxOdd = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > maxOdd && a[i] % 2 != 0)
		{
			maxOdd = a[i];
		}
	}
	cout << maxEven - maxOdd;
}