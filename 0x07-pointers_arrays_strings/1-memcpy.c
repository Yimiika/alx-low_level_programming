
#include <stdio.h>

/**
 * _memcpy - function that copies memory area
 * @dest: the output string
 * @src: input string
 * @n: bytes to copy
 *
 * Return: the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;
	char *pDst = dest;
	char const *pSrc =  src;

	for (count = 0; count < n; count++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
