#include "ege25.h"

void task7682()
{
	int const n = 5;
	int a[n];

	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	int count = 0;

	for (int i = 0; i < n - 1; ++i)
	{
		int s = a[i] + a[i + 1];
		if ((s % 2 == 0) && (s % 4 != 0))
		{
			++count;
		}
	}
	cout << count;
}