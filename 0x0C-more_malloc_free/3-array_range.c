#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value of the range
 * @max: the maximum value of the range
 *
 * Return: a pointer to the newly created array, or NULL if the function fails
 */
int *array_range(int min, int max)
{
    int *arr;
    int i, size;

    if (min > max)
        return (NULL);

    size = max - min + 1;
    arr = malloc(size * sizeof(int));
    if (arr == NULL)
        return (NULL);

    for (i = 0; i < size; i++)
        arr[i] = min + i;

    return (arr);
}
