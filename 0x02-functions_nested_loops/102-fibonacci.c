#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 * followed by a new line.
 * The numbers are separated by comma, followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int fib1 = 1, fib2 = 2, next_fib, count;

	printf("%lu, %lu", fib1, fib2);
	for (count = 2; count < 50; count++)
	{
		next_fib = fib1 + fib2;
		printf(", %lu", next_fib);
		fib1 = fib2;
		fib2 = next_fib;
	}
	printf("\n");

	return (0);
}
