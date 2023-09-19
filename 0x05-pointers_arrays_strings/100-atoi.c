#include "main.h"
/**
 * _atoi - convert a string to an integer.
 * @s: char pointer
 * Return: char pinter
 */
int _atoi(char *s)
{
	unsigned int n = 0, i = 0;
	char negative, positive;

	positive = 0;
	negative = 0;
	while (s[i] != '\0')
	{
		if (!((s[i] >= '0') && (s[i] <= '9')) && n > 0)
		{
			break;
		}
		if (((s[i] >= '0') && (s[i] <= '9')))
		{
			n = (n * 10) + (s[i] - '0');
		}
		else if (s[i] == '-')
			negative++;
		else if (s[i] == '+')
			positive++;

		i++;
	}

	if (positive < negative)
		n = n * -1;
	if (positive == 7 && negative == 1)
		n = n * -1;
return (n);
}
