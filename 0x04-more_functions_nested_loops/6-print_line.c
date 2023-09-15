#include "main.h"

/**
 * print_line - print '_' n time followed by a new line.
 * using _putchar function
 * @n: int number
 * Return: (void)
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
