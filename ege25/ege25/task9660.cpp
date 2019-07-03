#include "ege25.h"

void task9660()
{
	int const n = 5;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int maxDoubleDigit = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 100 && a[i] > 9 && a[i] % 3 != 0 && a[i] >  maxDoubleDigit)
		{
			maxDoubleDigit = a[i];
		}
	}
	if (maxDoubleDigit == 0)
	{
		cout << "not found";
	}
	else
	{
		cout << maxDoubleDigit;
	}
}