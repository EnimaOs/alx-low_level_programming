#include <stdio.h>

/**
 * main - function is the Entry Point for this program
 * prints the largest prime factor 612852475143
 * Return: value is (0)
 */

int main(void)
{
	long n, p;

	n = 612852475143;
	p = 2;
	while (n >= p * p)
	{
		if (n % p == 0)
		{
			n = n / p;
		}
		p++;
	}
	printf("%lu\n", n);
	return (0);
}
