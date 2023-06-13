#include "main.h"

/**
 * create_array - function that creates an array of chars
 * @c : the character
 * @size: size of character
 *
 * Return: returns NULL if 0 or fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < size; i++)
	array[i] = c;
	return (array);
}
