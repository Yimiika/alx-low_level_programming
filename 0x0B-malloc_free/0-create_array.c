#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @c : the character
 *
 * Return: returns NULL if 0 or fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
	return (NULL);
	}
	char *array;
	unsigned int i;
	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}
