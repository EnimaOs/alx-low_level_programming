#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char.
 * @s: array refrance
 * @to : array refrance
 */
void set_string(char **s, char *to)
{
	*s = to;
}
