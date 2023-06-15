#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * string_nconcat - concatenates two strings
  * @s1: string one
  * @s2: string two
  * @n: number of
  * Return: Null if function fails.
  */
int *array_range(int min, int max)
{
	int *arr, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min++;	
	}
	return (arr);
}
