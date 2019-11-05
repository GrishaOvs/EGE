#include <iostream>

using namespace std;

int productOfDigit(int n)
{
	int p = 1;
	while (n != 0)
	{
		p *= n % 10;
		n /= 10;
	}
	return p;
}

int task6(int divider)
{
	int amount = 0;
	for (int number = 100000; number <= 999999; ++number)
	{
		if (productOfDigit(number) % divider == 0)
		{
			++amount;
		}
	}
	return amount;
}

bool suitable(int n)
{
	while (n != 0)
	{
		int digit = n % 10;
		if (digit == 0 || digit == 7 || digit == 8 || digit == 9)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

int task8(int position)
{
	int p = 0;
	for (int n = 1000000; n <= 9999999; ++n)
	{
		if (suitable(n))
		{
			++p;
		}
		if (p == position)
		{
			return n;
		}
	}
	return -1;
}

int main()
{
	cout << task8(201123);
	return 0;
}