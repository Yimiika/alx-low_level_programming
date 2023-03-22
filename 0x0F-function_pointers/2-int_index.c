#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - function that searches for an array
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: function pointer to the function
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int index;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (index = 0; a < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
