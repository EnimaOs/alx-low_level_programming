#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet followed by a new line. 10x
 * using _putchar function again
 *Return: (void)
 */

void print_alphabet_x10(void)
{
	char i, letter;

	for (i = 0; i < 10; i++)
	{
		letter = 'a';

		while (letter <= 'z')
		{
		_putchar(letter++);
		}
		_putchar('\n');
	}
}
