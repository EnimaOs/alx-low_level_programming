#include "main.h"
/**
 * factorial - factorial n
 * @n: int
 * Return: string len (int)
 */
int factorial(int n)
{
	if (n == 0)
		return (n);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
