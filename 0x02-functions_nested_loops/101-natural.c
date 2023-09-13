#include "main.h"
#include <stdio.h>

/**
 * main - function is the Entry Point for this porgram
 * prints prints the sum of all the multiples of 3 or 5 below 1024
 * Return: value is (0)
 */

int main(void)
{
	int n = 1024, sum = 0;

	n--;
	while (n != 0)
	{
		if (n % 3 == 0 || n % 5 == 0)
			sum = sum + n;
		n--;
	}
	printf("%d\n", sum);
	return (0);
}
