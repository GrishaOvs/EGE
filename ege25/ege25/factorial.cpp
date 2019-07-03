int factorial(int n) // calculates factorial
{
	int f = 1;
	for (int i = 2; i <= n; ++i)
	{
		f *= i;
	}
	return f;
}
