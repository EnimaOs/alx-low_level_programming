#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: char pointer of string to print
 */
void _puts(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		{
		_putchar(str[len]);
		len++;
		}
	_putchar('\n');
}
