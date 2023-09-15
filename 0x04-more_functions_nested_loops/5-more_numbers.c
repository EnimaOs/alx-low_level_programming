#include "main.h"

/**
 * more_numbers - numbers, from 0 to 14,10 times followed by a new line.
 * using _putchar function
 *
 * Return: (void)
 */

void more_numbers(void)
{
	char n, t;

	n = '0';
	t = 0;

	while (n <= '9')
	{
		n++;
		while (t <= 14)
		{
			if (t / 10 != 0)
				_putchar('0' + t / 10);
			_putchar('0' + t % 10);
			t++;
		}
		t = 0;
		_putchar('\n');
	}
}
