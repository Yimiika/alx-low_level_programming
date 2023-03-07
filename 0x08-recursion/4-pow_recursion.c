
#include <stdio.h>

/**
 * _pow_recursion -function that returns the value of x
 * @x: This is the input number
 * @y: This is the power number
 *
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
