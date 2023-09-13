#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to check
 * Return: (0) if char is lowercase
 *	     : (1) if char is otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
