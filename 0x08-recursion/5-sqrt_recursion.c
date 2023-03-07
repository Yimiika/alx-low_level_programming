#include <stdio.h>

/**
 * my_sqrt_recursion - function about the square root
 * @a: entry is equal to n
 * @b: the sum
 *
 * Return: This is the result
 */
int my_sqrt_recursion(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (my_sqrt_recursion(a, b + 1));
}

/**
 * _sqrt_recursion - first function
 * @n: the value
 *
 * Return: result of the function
 */
int _sqrt_recursion(int n)
{
	if (n <= 0)
		return (-1);
	return (my_sqrt_recursion(n, 0));
}
