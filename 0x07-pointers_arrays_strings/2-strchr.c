#include "main.h"
#include <stdio.h>
/**
 * _strchr - copies memory area.
 * @s: array refrance
 * @c: char
 * Return: s array refrance or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		s++;
		if (*s == c)
			return (s);
	}

	return (NULL);
}
