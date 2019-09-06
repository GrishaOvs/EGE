#include "ege25.h"

void task7936()
{
	int const n = 6;
	int a[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[n];
	}
	int max = 0;
	int min = INT_MAX;
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0 && a[i] > max)
		{	
			max = a[i];
		}
		if (a[i] % 2 != 0 && a[i] < min)
		{		
			min = a[i];
		}
	}

}