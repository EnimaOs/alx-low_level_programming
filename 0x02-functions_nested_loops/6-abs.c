#include "main.h"

/**
 * _abs - check sing  of a number
 * @n: number to compute the absolute
 * Return: (|n|) absolute value of n
 */

int _abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
