#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: char pointer
 * Return: the length *s
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	if (s[0] == '\0')
		return (0);

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
