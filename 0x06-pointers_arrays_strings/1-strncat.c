#include <stdio.h>

/**
 * _strncat -function that concatenates two strings
 *
 * @dest: the output
 * @src: input source
 * @n: number
 *
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (count = 0; count < n && src[count] != '\0'; count++)
	{
		dest[i] = src[count];
		i++;
	}
	if (count < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
