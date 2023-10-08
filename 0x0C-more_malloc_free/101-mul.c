#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * isNumeric - is it number
 * @str: str
 * Return: true or false.
 */
int isNumeric(const char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
/**
 * multiply - multiplies two numbers "arguments"
 * @num1: num1
 * @num2: num2
 * Return: larger index.
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - multiplies two numbers "arguments"
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) success or (1) faild
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	int num1, num2;

	if (!isNumeric(argv[1]) || !isNumeric(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (98);
	}

	int result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}
