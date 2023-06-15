#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - function that allocates memory
 * @b: the value
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *p;

p = malloc(b);
if (p == NULL)
{
exit(98);
}
return (p);
}
