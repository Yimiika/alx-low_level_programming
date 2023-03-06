#include <stdio.h>

/**
 * _memset - function that fills memory with a constant byte
 *
 * @s: This is the output and the return
 * @b: This is the this is the input string
 * @n: This is the number of bytes
 *
 * Return: pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n ; count++)
	{
		s[count] = b;
	}
	return (s);
}
