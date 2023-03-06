#include <stdio.h>
#include <stddef.h>

/**
 * _strchr - Function that locates a character in a string
 * @s: input string
 * @c: the character
 * Return: Return to the character found
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
