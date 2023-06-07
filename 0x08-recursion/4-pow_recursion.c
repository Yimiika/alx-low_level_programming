#include "main.h"

/**
 * _pow_recursion- A function that returns the value of x raised to the power of y
 * @x: first input number
 * @y: second input number
 * Return: the value after calculation
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	if (y  == 0)
	}
	{
	return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
