#include "ege25.h"

void  task9209()
{
	int const n = 6;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int ch = 0;
	int nch = 0;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += a[i];
		if (a[i] % 2 == 0)
		{
			++ch;
		}
		if (a[i] % 2 != 0)
		{
			++nch;
		}
	}
	if (sum % 2 == 0)
	{
		cout << ch;
	}
	if (sum % 2 != 0)
	{
		cout << nch;
	}
}