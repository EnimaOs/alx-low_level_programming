#include <stdio.h>

/*
 * Task - Variables, if, else, while project
 * Purpose : prints the alphabet in lowercase, followed by a new line.
 * my sulotion: get letter using ascii
 *		lowercase start from 97 to 122 then from 65 to 90
 */

/**
 * main - function is the Entry Point for this porgram
 * prints lowercase letter then in uppercase followed by a new line using loops
 * Return: value is (0)
 */
int main(void)
{
	
	char letter = 97;
	while (letter != 123)
		putchar(letter++);
	letter = 65;
	while (letter != 91)
		putchar(letter++);
	putchar('\n');
	return (0);
}
