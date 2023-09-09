#include <stdio.h>

/*
 * Task Variables, if, else, while project
 * Purpose : prints alphabet in lowercase in reverse,followed by a new line.
 */

/**
 * main - function is the Entry Point for this porgram
 * print lowercase letter in reverse followed by a new line
 * Return: value is (0)
 */

int main(void)
{
	/*start from 'z' */
	char letter = 'z';
	/*reapt untile 'a' */
	while (letter != ('a' - 1))
		putchar(letter--);

	putchar('\n');

	return (0);
}
