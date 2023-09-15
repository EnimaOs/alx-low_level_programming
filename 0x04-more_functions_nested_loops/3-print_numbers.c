#include "main.h"

/**
 * print_numbers - numbers, from 0 to 9, followed by a new line.
 * using _putchar function
 *
 * Return: (void)
 */

void print_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		_putchar(n++);
	}
	_putchar('\n');
}
