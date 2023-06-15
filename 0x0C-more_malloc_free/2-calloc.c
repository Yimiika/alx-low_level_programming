#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _calloc - Allocates memory
  * @nmemb: the number of elements
  * @size: size of the element
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
	totalsize = nmemb * size;
	ptr = malloc(totalsize);

	if (ptr == NULL)
	{
		return (NULL);	
	}
	memset(ptr, 0, totalsize);
	return (ptr);
}
