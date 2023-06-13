#include "main.h"

/**
 * _strdup - function that creates a duplicate
 * @str : the string to duplicate
 *
 * Return: returns pointer to duplicate
 */

char *_strdup(char *str)
{
	char *second;
	int length = 0;
	int i;

	if (str == NULL)
	{
	return (NULL);
	}
	while (str[length] != '\0')
{
length++;
}
	second = malloc((length + 1) * sizeof(char));
	if (second == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < length; i++)
	second[i] = str[i];
	return (second);
}
