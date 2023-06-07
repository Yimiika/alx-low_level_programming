#include "main.h"

int primerecursion(int n, int i);
/**
 * is_prime_number- A function that checks if its a prime
 * @n: input number
 * Return: the value
 */

int is_prime_number(int n)
{
	if (n <= 1)
	return (0);
	return (primerecursion(n, 2));
}

/**
 * primerecursion - function to check if a number is prime
 * @n: input number
 * @i: the divider to check
 *
 * Return: 1 if the number is prime
 */
int primerecursion(int n, int i)
{
if (i >= n)
{
return (1);
}
if (n % i == 0)
{
return (0);
}
return (primerecursion(n, i + 1));
}
