#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * larger_num - get larger num
 * @n1: n1
 * @n2: n2
 * Return: larger index.
 */
int larger_num(char *n1, char *n2)
{
	int l1, l2;

	l1 = strlen(n1);
	l2 = strlen(n2);

	if (l1 > l2)
		return (1);
	else if (l1 < l2)
		return (2);
	else
		return (strcmp(n1, n2) >= 0 ? 1 : 2);
}

/**
 * is_number - is it number
 * @n: n1
 * Return: 1 true or 0 false
 */
int is_number(char *n)
{
	while (*n)
	{
		if (!((*n >= '0') && (*n <= '9')))
			return (0);
		n++;
	}
	return (1);
}

/**
 * mul_number - multiply two numbers as strings
 * @n1: first number as string
 * @n2: second number as string
 * Return: result as a dynamically allocated string
 */
char *mul_number(char *n1, char *n2)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int lenResult = len1 + len2;
	int *result = calloc(lenResult, sizeof(int));

	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (int i = len1 - 1; i >= 0; i--)
	{
		for (int j = len2 - 1; j >= 0; j--)
		{
			int digit1 = n1[i] - '0';
			int digit2 = n2[j] - '0';
			int product = digit1 * digit2;

			int sum = product + result[i + j + 1];

			result[i + j + 1] = sum % 10;
			result[i + j] += sum / 10;
		}
	}

	char *resultStr = malloc(lenResult + 1);

	if (resultStr == NULL)
	{
		free(result);
		printf("Error\n");
		exit(98);
	}

	for (int i = 0; i < lenResult; i++)
	{
		resultStr[i] = result[i] + '0';
	}
	resultStr[lenResult] = '\0';
	free(result);
	return (resultStr);
}

int main(int argc, char *argv[])
{
	int larger, isNumbers;
	char *total;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	isNumbers = is_number(argv[1]) && is_number(argv[2]);
	if (!isNumbers)
	{
		printf("Error\n");
		exit(98);
	}

	larger = larger_num(argv[1], argv[2]);

	if (larger == 1)
		total = mul_number(argv[1], argv[2]);
	else
		total = mul_number(argv[2], argv[1]);

	printf("%s\n", total);

	free(total);

	return (0);
}
