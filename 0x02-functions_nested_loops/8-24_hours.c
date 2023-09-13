#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	char hours = 0;
	char minute = 0;

	while (hours != 24)
	{
		minute = 0;
		while (minute != 60)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar(':');
			_putchar('0' + minute / 10);
			_putchar('0' + minute % 10);
			_putchar('\n');
			minute++;
		}
	hours++;

	}
}
