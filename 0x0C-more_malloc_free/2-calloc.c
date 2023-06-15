#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * malloc_checked - Allocates memory
  * @b: the size to allocate
  *
  * Return: Nothing.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int totalsize;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);	
	}
	memset(ptr, 0, totalsize);
	return (ptr);
}
