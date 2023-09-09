#include <stdio.h>

/*
 * Task Variables, if, else, while project
 * Purpose : prints the alphabet in lowercase, followed by a new line.
 */

/**
 * main - function is the Entry Point for this porgram
 * prints lowercase letter followed by a new line using loops
 * Return: value is (0)
 */

int main(void)
{
	char letter = 97;
	/*letter != 123 "reapt untile letter == 122"  ingore 'q'and 'e'*/
	while (letter != 123)
	{
		if ((letter != 'q') && (letter != 'e'))
			putchar(letter);
		letter++;
	}
	putchar('\n');

	return (0);
}
