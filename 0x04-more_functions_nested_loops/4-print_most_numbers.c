#include "main.h"
/**
 * print_most_numbers - numbers, from 0 to 9, followed by a new line skip 2 4
 * using _putchar function
 *
 * Return: (void)
 */

void print_most_numbers(void)
{
	char n = '0';

	while (n <= '9')
	{
		if (!((n == '2') ||  (n == '4')))
			_putchar(n);
		n++;
	}
	_putchar('\n');
}