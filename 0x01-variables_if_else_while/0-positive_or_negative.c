#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * Task 0 - Variables, if, else, while project
 * Purpose : if and else if
 * Mission : checking if 'n' is positive or nigative
 */

/**
 * main - function is the Entry Point for porgram
 * checking if 'n' is positive or nigative
 * Return: value is (0)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
