#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
 * using _putchar function
 * Return: (void)
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter++);
	}
	_putchar('\n');
}
