#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _realloc - reallocates a memory bock using malloc and free
  * @ptr: pointer to the previous memory
  * @old_size: size in bytes of old memory
  * @new_size: size in  bytes of new memory
  *
  * Return: Null if function fails.
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		newptr = malloc(new_size);
		if (newptr == NULL)
		{
			return(NULL);
			return (newptr);
		}
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	newptr = malloc(new_size);
	if (newptr == NULL)
	{
		return (NULL);
	}
	memcpy(newptr, ptr, (old_size < new_size ? old_size : new_size));
	free(ptr);
	return (newptr);
}
