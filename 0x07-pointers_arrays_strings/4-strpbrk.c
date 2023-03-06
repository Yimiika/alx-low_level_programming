#include <stdio.h>
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: input string
 * @accept: string to locate
 *
 * Return: Returns a pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, count;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (count = 0; accept[count] != '\0'; count++)
		{
			if (accept[count] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
