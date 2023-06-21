#include "function_pointers.h"

/**
 * array_iterator - executes a function given as an array
 * @array: The array
 * @size: the size
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
if (array != NULL && action != NULL && size > 0)
{
for ( i = 0; i < size; i++)
{
action(array[i]);
}
}
}
