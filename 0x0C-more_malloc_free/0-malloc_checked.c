#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the value
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(sizeof(b));

if (p == NULL)
{
exit(98);
}
return (*p);
}
