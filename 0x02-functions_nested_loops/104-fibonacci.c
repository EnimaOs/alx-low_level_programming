#include <stdio.h>

/**
 * main - function is the Entry Point for this porgram
 * prints first 50 Fibonacci numbers
 * Return: value is (0)
 */

int main(void)
{
	unsigned long int cur_fibo, prev_fibo, nex_fibo;

	unsigned long int prev_fibo_1, prev_fibo_2;

	unsigned long int nex_fibo_1, nex_fibo_2;

	prev_fibo = 1;
	nex_fibo = 2;

	printf("%lu", prev_fibo);

	for (cur_fibo = 1; cur_fibo < 91; cur_fibo++)
	{
		printf(", %lu", nex_fibo);
		nex_fibo = nex_fibo + prev_fibo;
		prev_fibo = nex_fibo - prev_fibo;
	}
	prev_fibo_1 = prev_fibo / 1000000000;
	prev_fibo_2 = prev_fibo % 1000000000;
	nex_fibo_1 = nex_fibo / 1000000000;
	nex_fibo_2 = nex_fibo % 1000000000;

	for (cur_fibo = 92; cur_fibo < 99; ++cur_fibo)
	{
		printf(", %lu", nex_fibo_1 + (nex_fibo_2 / 1000000000));
		printf("%lu", nex_fibo_2 % 1000000000);
		nex_fibo_1 = nex_fibo_1 + prev_fibo_1;
		prev_fibo_1 = nex_fibo_1 - prev_fibo_1;
		nex_fibo_2 = nex_fibo_2 + prev_fibo_2;
		prev_fibo_2 = nex_fibo_2 - prev_fibo_2;
	}

	printf("\n");

	return (0);
}
