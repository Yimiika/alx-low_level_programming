#include "main.h"

int sqrtfinder(int n, int i);
/**
 * _sqrt_recursion- A function that returns the natural square root of a number
 * @n: the input number
 * Return: the value after calculation
 */

int _sqrt_recursion(int n)
{
	return sqrtfinder(n , 1);
}

/**
 * sqrtfinder- A function that finds the natural square root of a number
 * @n: the input number
 * @i: first value
 * Return: the value after calculation
 */

int sqrtfinder(int n, int i)
{
	if (i * i == n)
	{
	return (i);
	}
	if (i * i > n)
{
return (-1);
}
return sqrtfinder (n, i + 1);
}
